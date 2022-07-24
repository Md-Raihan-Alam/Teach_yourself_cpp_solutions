#include<iostream>
using namespace std;
class coord{
    public:
    int x,y;
    coord(int i=0,int j=0){
        x=i;y=j;
    }
    void get_xy(int &i,int &j){
        i=x;
        j=y;
    }
    coord operator+(coord ob2){
        coord temp;
        temp.x=x+ob2.x;
        temp.y=y+ob2.y;
        return temp;
    }
    coord operator-(coord ob2){
        coord temp;
        temp.x=x-ob2.x;
        temp.y=y-ob2.y;
        return temp;
    }
    coord operator=(coord ob2)
    {
        x=ob2.x;
        y=ob2.y;
        return *this;
    }
};
class quad:public coord{
    int quadrant;
    public:
    quad(int x=0,int y=0):coord(x,y){
        if(x==0 && y==0)
            quadrant=0;
        else if(x>=0 && y>=0)
            quadrant=1;
        else if(x<0 && y>=0)
            quadrant=2;
        else if(x<0 && y<0)
            quadrant=3;
        else 
            quadrant=4;
    }
    void showq()
    {
        cout<<"Point in Quadrant: "<<quadrant<<"\n";
    }
    quad operator=(coord ob2){
        x=ob2.x;
        y=ob2.y;
        if(x==0 && y==0)
            quadrant=0;
        else if(x>=0 && y>=0)
            quadrant=1;
        else if(x<0 && y>=0)
            quadrant=2;
        else if(x<0 && y<0)
            quadrant=3;
        else 
            quadrant=4;
        return *this;
    }
};
int main()
{
    quad o1(10,10),o2(15,3),o3;
    int x,y;
    o3=o1+o2;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o1+o2) X:"<<x<<" Y:"<<y<<endl;
    o3=o1-o2;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o1-o2) X:"<<x<<" Y:"<<y<<endl;
    o3=o1;
    o3.get_xy(x,y);
    o3.showq();
    cout<<"(o3=o1) X:"<<x<<" Y:"<<y<<endl;
    return 0;
}