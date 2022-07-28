#include<iostream>
using namespace std;
int main()
{
    cout.width(10);
    cout<<"Hello\n";
    cout.fill('%');//needed just once for whole program
    cout.width(10);
    cout<<"Hello\n";
    cout.setf(ios::left);//left justify
    cout.width(10);
    cout<<"Hello\n";
    cout.width(10);
    cout.precision(5);//set 5 digits of precision
    cout<<321.434234234<<"\n";
    return 0;
}