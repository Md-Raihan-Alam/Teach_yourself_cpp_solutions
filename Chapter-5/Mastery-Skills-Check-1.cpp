#include<iostream>
#include<string>
#include<ctype.h>
#include<ctime>
using namespace std;
class date{
    public:
    date(string s){
        cout<<"Today date is "<<s<<endl;
    }
    date(int m,int d,int y)
    {
        cout<<"Today date is "<<m<<"/"<<d<<"/"<<y<<endl;
    }
    date(time_t t){
        struct tm *p;
        p=localtime(&t);
        cout<<"Today date is "<<p->tm_mon+1<<"/"<<p->tm_mday<<"/"<<p->tm_year+1900<<endl;
    }
};
int main()
{
    date d1("7/13/2022");
    date d2(7,13,2022);
    date d3(time(NULL));
    return 0;
}