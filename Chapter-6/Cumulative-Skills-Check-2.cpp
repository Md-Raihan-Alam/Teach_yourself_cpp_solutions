#include<iostream>
using namespace std;
class myclass{
    int x,y;
    public:
    myclass(int i=0,int j=0)
    {
        this->x=i;
        this->y=j;
    }
    void get_xy();
};
void myclass::get_xy(){
    cout<<this->x<<" "<<this->y<<endl;
}
int main()
{
    myclass ob;
    ob.get_xy();
    return 0;
}