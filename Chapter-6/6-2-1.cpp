#include<iostream>
using namespace std;
class coord{
    int x;
    int y;
    public:
    coord(int a=0,int b=0){
        this->x=a;
        this->y=b;
    }
    coord operator*(coord ob)
    {
        coord temp;
        temp.x=this->x*ob.x;
        temp.y=this->y*ob.y;
        return temp;
    }
    coord operator/(coord ob)
    {
        coord temp;
        temp.x=this->x/ob.x;
        temp.y=this->y/ob.y;
        return temp;
    }
    void get_xy(int &i,int &j){
        i=this->x;
        j=this->y;
    }
};
int main()
{
    coord curOb(6,8),curOb2(2,4),curOb3,curOb4;
    int k,l;
    curOb3=curOb*curOb2;
    curOb4=curOb/curOb2;
    curOb3.get_xy(k,l);
    cout<<k<<" "<<l<<endl;
    curOb4.get_xy(k,l);
    cout<<k<<" "<<l<<endl;
    return 0;
}