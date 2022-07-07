#include<bits/stdc++.h>
using namespace std;
long mystrtol(const char *s,char **end,int base=10)
{
    return strtol(s,end,base);
}
int main()
{
    long x;
    char *s1="525252";
    char *p;
    x=mystrtol(s1,&p);
    cout<<x<<endl;
    return 0;
}