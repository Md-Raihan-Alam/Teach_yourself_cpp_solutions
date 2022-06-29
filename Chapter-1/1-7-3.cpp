#include<bits/stdc++.h>
using namespace std;
int min(int a,int b){
    cout<<"In int "<<endl;
    return a>b?b:a;
}
long min(long a,long b){
    cout<<"In long "<<endl;
    return a>b?b:a;
}
double min(double a,double b){
    cout<<"In double "<<endl;
    return a>b?b:a;
}
int main()
{
    cout<<min(4,5)<<endl;
    cout<<min(9000000000,7000000000)<<endl;
    cout<<min(45.32,85.32)<<endl;
    return 0;
}