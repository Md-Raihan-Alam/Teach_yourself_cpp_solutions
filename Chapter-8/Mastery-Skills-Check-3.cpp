#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<100<<" "<<hex<<100<<" "<<oct<<100<<"\n";
    cout<<setiosflags(ios::left);
    cout<<setprecision(2);
    cout<<setfill('*');
    cout<<setw(20);
    cout<<1000.424234<<"\n";
    return 0;
}