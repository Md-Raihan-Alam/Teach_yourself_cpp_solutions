#include<iostream>
using namespace std;
class coord{
    int x,y;
    public:
    coord(int a=0,int b=0)
    {
        this->x=a;
        this->y=b;
    }
    void get_xy(int &i,int &j)
    {
        i=this->x;
        j=this->y;
    }
    coord operator+(coord ob2){//binary operator
        coord temp;
        temp.x=x+ob2.x;
        temp.y=y+ob2.y;
        return temp;
    }
    coord operator+()
    {
        x=x<0?-x:x;
        y=y<0?-y:y;
        return *this;
    }
};
int main()
{
    coord ob1(10,10),ob2(-5,-7);
    int i,j;
    ob1=ob1+ob2;
    ob1.get_xy(i,j);
    cout<<"ob1-ob2 x:"<<i<<" y:"<<j<<endl;
    ob2=+ob2;
    ob2.get_xy(i,j);
    cout<<"+ob2 x:"<<i<<" y:"<<j<<endl;
    return 0;
}