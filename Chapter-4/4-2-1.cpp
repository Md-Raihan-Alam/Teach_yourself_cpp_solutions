#include<bits/stdc++.h>
using namespace std;
class samp{
    int a,b;
    public:
    samp(int m,int n){
        a=m;
        b=n;
    }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};
int main()
{
    samp sb[4]={
        samp(1,2),
        samp(3,4),
        samp(5,6),
        samp(7,8)
    };
    samp *p;
    p=&sb[3];
    for(int i=3;i>=0;i--)
        {
            cout<<p->get_a()<<" ";
            cout<<p->get_b()<<endl;
            p--;
        }
    return 0;
}