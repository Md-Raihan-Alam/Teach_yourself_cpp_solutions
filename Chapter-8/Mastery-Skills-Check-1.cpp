#include<iostream>
using namespace std;
int main()
{  
    cout<<100<<" ";
    cout.unsetf(ios::dec);//clear dec flag
    cout.setf(ios::hex);
    cout<<100<<" ";
    cout.unsetf(ios::hex);//clear hex flag
    cout.setf(ios::oct);
    cout<<100<<"\n";
    return 0;
}