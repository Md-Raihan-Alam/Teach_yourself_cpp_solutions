#include<iostream>
using namespace std;
inline int abs(int a){
    cout<<"In integer "<<endl;
    return a>0?a:-a;
}
inline double abs(double a){
    cout<<"In double "<<endl;
    return a>0.0?a:-a;
}
inline long abs(long a){
    cout<<"In long "<<endl;
    return a>0?a:-a;
}
int main()
{
    cout<<abs(-3)<<endl;
    cout<<abs(-1000000)<<endl;
    cout<<abs(-98.3)<<endl;
    return 0;
}