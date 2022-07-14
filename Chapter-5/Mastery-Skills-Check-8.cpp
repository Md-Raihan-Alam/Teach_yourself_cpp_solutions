#include<bits/stdc++.h>
using namespace std;
void reverse(char *p,int count=0)
{
    int total=count==0?strlen(p)-1:count;
    for(int i=0,s=total;i<total;i++,s--)
    {
        char temp=p[i];
        p[i]=p[s];
        p[s]=temp;
    }
}
int main()
{
    char s[]="Hello";
    reverse(s);
    cout<<s<<endl;
    return 0;
}