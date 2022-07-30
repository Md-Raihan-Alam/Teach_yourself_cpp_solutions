#include<iostream>
#include<ctime>
using namespace std;
ostream &td(ostream &stream)
{
    struct tm *local;
    time_t t;
    t=time(NULL);
    local=localtime(&t);
    stream<<asctime(local)<<endl;
    return stream;
}
int main()
{
    cout<<"Current time:"<<td;
    return 0;
}