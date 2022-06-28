#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inches;
    while(1){
        cout<<"Enter the feet amount:";
        cin>>inches;
        if(inches==0) break;
        cout<<"The equivalent number of inches is "<<inches*12<<endl; 
    }
    return 0;
}