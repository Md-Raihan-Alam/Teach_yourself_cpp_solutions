#include<bits/stdc++.h>
using namespace std;
union swapbytes{
    unsigned char c[2];
    unsigned i;
    swapbytes(unsigned x);
    void swp();
};
swapbytes::swapbytes(unsigned x){
    i=x;
}
void swapbytes::swp(){
    unsigned char temp;
    temp=c[0];
    c[0]=c[1];
    c[1]=temp;
}
int main()
{
    swapbytes ob(1);
    ob.swp();
    cout<<ob.i;
    return 0;
}