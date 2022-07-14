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
    int operator<(coord ob)
    {
        return x<ob.x && y<ob.y;
    }
    int operator>(coord ob)
    {
        return x>ob.x && y>ob.y;
    }
};
int main()
{
    coord ob1(10,12),ob2(21,23);
    if(ob1<ob2) cout<<"ob1<ob2"<<endl;
    else cout<<"ob2<=ob1"<<endl;
    if(ob1>ob2) cout<<"ob1>ob2"<<endl;
    else cout<<"ob2>=ob1"<<endl;
    return 0;
}