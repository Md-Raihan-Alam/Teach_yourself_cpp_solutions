#include<iostream>
using namespace std;
istream &skipchar(istream &stream)
{
    char c;
    for(int i=0;i<10;i++) stream>>c;
    return stream;
}
int main()
{
    char str[100];
    cin>>skipchar>>str;
    cout<<str;
    return 0;
}