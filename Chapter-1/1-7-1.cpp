#include<bits/stdc++.h>
using namespace std;
int sroot(int a){
    cout<<"In integer "<<endl;;
    return sqrt(a);
}
long int sroot(long int a){
    cout<<"In long int "<<endl;
    return sqrt(a);
}
double sroot(double a){
    cout<<"In double "<<endl;
    return sqrt(a);
}
int main()
{
    // cout<<sroot(4)<<endl<<sroot(10L)<<endl<<sroot(16.00)<<endl;
    cout<<sroot(4)<<endl;
    cout<<sroot(10L)<<endl;
    cout<<sroot(16.00)<<endl;
    return 0;
}