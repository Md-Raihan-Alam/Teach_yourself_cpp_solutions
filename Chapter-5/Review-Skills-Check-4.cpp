#include<iostream>
using namespace std;
class samp{
    int x;
public:
    samp(int n){
        x=n;
    }
    int getx(){
        return x;
    }
};
int main()
{
    samp ob[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
        cout<<ob[i].getx()<<" ";
    return 0;
}