#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(10)<<"number";
    cout<<setw(10)<<"log";
    cout<<setw(10)<<"log10"<<endl;
    for(int i=2;i<=100;i++)
    {
        cout<<setw(10)<<i;
        cout<<setw(10)<<log(i);
        cout<<setw(10)<<log10(i)<<endl;
    }
    return 0;
}