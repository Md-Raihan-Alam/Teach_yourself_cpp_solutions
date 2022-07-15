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
    friend coord operator*(int i,coord ob)
    {
        coord temp;
        temp.x=i*ob.x;
        temp.y=i*ob.y;
        return temp;
    }
    friend coord operator*(coord ob,int i)
    {
        coord temp;
        temp.x=ob.x*i;
        temp.y=ob.y*i;
        return temp;
    }
};
int main()
{
    coord ob1(10,12),ob2;
    int i=2,j=3,k,l;
    ob2=i*ob1;
    ob2.get_xy(k,l);
    cout<<"ob2=i*ob1 k:"<<k<<" l:"<<l<<endl;
    ob2=ob1*j;
    ob2.get_xy(k,l);
    cout<<"ob2=ob1*j k:"<<k<<" l:"<<l<<endl;
    return 0;
}