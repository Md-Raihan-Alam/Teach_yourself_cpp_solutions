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
    friend coord operator--(coord &ob)
    {
        ob.x--;
        ob.y--;
        return ob;
    }
    friend coord operator--(coord &ob,int notused)
    {
        --ob.x;
        --ob.y;
        return ob;
    }
};
int main()
{
    coord ob1(10,10);
    int i,j;
    ob1--;
    ob1.get_xy(i,j);
    cout<<"ob1-- i:"<<i<<" j:"<<j<<endl;
    --ob1;
    ob1.get_xy(i,j);
    cout<<"--ob1 i:"<<i<<" j:"<<j<<endl;
    return 0;
}