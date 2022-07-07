#include<iostream>
using namespace std;
int main()
{
    int *i=new int(3);
    float *f=new float(9.8);
    cout<<*i<<" "<<*f<<endl;
    delete i;
    delete f;
    return 0;
}