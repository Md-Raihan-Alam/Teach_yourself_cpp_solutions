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
    coord operator--(){
        this->x--;
        this->y--;
        return *this;
    }
    coord operator--(int notused){
        this->x--;
        this->y--;
        return *this;
    }
};
int main()
{
    coord ob1(50,50);
    int x,y;
    ob1--;
    ob1.get_xy(x,y);
    cout<<"ob1-- X:"<<x<<" Y:"<<y<<endl;
    --ob1;
    ob1.get_xy(x,y);
    cout<<"--ob1 X:"<<x<<" Y:"<<y<<endl;
    return 0;
}