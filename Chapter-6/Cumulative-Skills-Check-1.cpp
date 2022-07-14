#include<iostream>
using namespace std;
class myclass{
    int x,y;
    public:
    myclass(int i,int j)
    {
        this->x=i;
        this->y=j;
    }
    myclass()
    {
        this->x=0;
        this->y=0;
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