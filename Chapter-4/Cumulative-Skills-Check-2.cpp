#include<bits/stdc++.h>
using namespace std;
class strtype{
    char *p;
    int len;
    public:
    strtype(char *ptr);
    ~strtype(){
        cout<<"Freeing"<<endl;
        delete [] p;
    }
    void show();
};
strtype::strtype(char *ptr){
    len=strlen(ptr);
    p=new char[len+1];
    if(!p){
        cout<<"Error creating memory";
        exit(1);
    }
    strcpy(p,ptr);
}
void strtype::show()
{
    cout<<p<<" length "<<len;
    cout<<endl;
}
int main()
{
    strtype s1("This is a test"),s2("I like object oriented programing");
    s1.show();
    s2.show();
    return 0;
}