#include<iostream>
using namespace std;
void order(int &x,int &y)
{
    if(x>y){
        int temp=x;
        x=y;
        y=x;
    }
}
int main()
{
    int a=1,b=0,c=0,d=1;
    order(a,b);
    order(c,d);
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}