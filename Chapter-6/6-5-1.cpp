#include<iostream>
using namespace std;
class coord
{
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
    friend coord operator-(coord ob1,coord ob2)
    {
        coord temp;
        temp.x=ob1.x-ob2.x;
        temp.y=ob1.y-ob2.y;
        return temp;
    }
    friend coord operator/(coord ob1,coord ob2)
    {
        coord temp;
        temp.x=ob1.x/ob2.x;
        temp.y=ob1.y/ob2.y;
        return temp;
    }
};
int main()
{
    coord ob1(10,20),ob2(5,4),ob3;
    int i,j;
    ob3=ob1-ob2;
    ob3.get_xy(i,j);
    cout<<"ob3=ob1-ob2 x:"<<i<<" y:"<<j<<endl;
    ob3=ob1/ob2;
    ob3.get_xy(i,j);
    cout<<"ob3=ob1/ob2 x:"<<i<<" y:"<<j<<endl;
    return 0;
}