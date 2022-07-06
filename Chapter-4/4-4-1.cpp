#include<bits/stdc++.h>
using namespace std;
int main()
{
    float *p;
    long *l;
    char *c;
    p=new float;
    l=new long;
    c=new char;
    if(!p || !l || !c){
        cout<<"Error creating memory";
        return 0;
    }
    *p=43.54;
    *l=100000;
    *c='C';
    cout<<*p<<" "<<*l<<" "<<*c<<endl;
    delete p;
    delete l;
    delete c;
    return 0;
}