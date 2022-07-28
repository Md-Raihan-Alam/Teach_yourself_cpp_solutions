#include<iostream>
#include<cstring>
using namespace std;
void center(char *s)
{
    int len=40+(strlen(s)/2);
    cout.width(len);
    cout<<s<<endl;
}
int main()
{
    char str[80];
    fgets(str,80,stdin);
    center(str);
    return 0;
}
