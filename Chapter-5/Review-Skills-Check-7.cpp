#include<bits/stdc++.h>
using namespace std;
void mag(long &num,long order)
{
    for(;order>0;order--)    num*=10;
}
int main()
{
    long number,ordered;
    cout<<"Enter the number:";
    cin>>number;
    cout<<"Enter the order for magnitude:";
    cin>>ordered;
    mag(number,ordered);
    cout<<"After the magnitude the number will be "<<number<<endl;
    return 0;
}