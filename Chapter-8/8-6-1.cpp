#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype{
    char *p;
    int len;
    public:
    strtype(char *p1);
    ~strtype(){
        delete [] p;
    }
    friend ostream &operator<<(ostream &stream,strtype &ob);
    friend istream &operator>>(istream &stream,strtype &ob);
};
strtype::strtype(char *p1)
{
    len=strlen(p1)+1;
    p=new char[len];
    if(!p){
        cout<<"Allocation error\n";
        exit(1);
    }
    strcpy(p,p1);
}
ostream &operator<<(ostream &stream,strtype &ob)
{
    stream<<ob.p;
    return stream;
}
istream &operator>>(istream &stream,strtype &ob)
{
    cout<<endl;
    char temp[255];
    stream>>temp;
    if(strlen(temp)>ob.len){
        delete [] ob.p;
        ob.len=strlen(temp)+1;
        ob.p=new char[ob.len];
        if(!ob.p){
            cout<<"Allocation error\n";
            exit(1);
        }
    }
    strcpy(ob.p,temp);
    return stream;
}
int main()
{
    strtype s1("This is a test");
    cout<<s1;
    cin>>s1;
    cout<<s1;
    return 0;
}