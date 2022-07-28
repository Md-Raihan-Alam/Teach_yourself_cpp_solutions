#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout.width(10);
    cout<<"number";
    cout.width(10);
    cout<<"log";
    cout.width(10);
    cout<<"10log";
    cout<<endl;
    for(int i=2;i<=100;i++)
    {
        cout.width(10);
        cout<<i;
        cout.width(10);
        cout<<log(i);
        cout.width(10);
        cout<<log10(i);
        cout<<endl;
    }
    return 0;
}