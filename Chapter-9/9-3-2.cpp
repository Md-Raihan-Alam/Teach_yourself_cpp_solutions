#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class account{
    int custnum;
    char name[80];
    double balance;
    public:
    account(int c,char *n,double d)
    {
        custnum=c;
        strcpy(name,n);
        balance=d;
    }
    friend ostream &operator<<(ostream &stream,account &acc)
    {
        stream<<acc.custnum<<" ";
        stream<<acc.name<<" "<<acc.balance;
        stream<<"\n";
        return stream;
    }
};
int main()
{
    account ob(1121,"Raihan alam",5252.34);
    ofstream file("accounts",ios::out|ios::binary);
    if(!file){
        cout<<"error writing file"<<endl;
        exit(1);
    }
    file<<ob;
    file.close();
    return 0;
}