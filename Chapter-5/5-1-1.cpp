#include<iostream>
#include<cstring>
using namespace std;
class strtype{
    char *p;
    int len;
    public:
    strtype(){
        p=new char[255];
        len=255;
        strcpy(p,"");
    }
    strtype(char *s,int strSize){
        p=new char[strSize];
        if(!p){
            cout<<"Allocation Error";
            exit(1);
        }
        if(strlen(s)<0|| strlen(s)>strSize){
            cout<<"Bounds Error";
            exit(1);
        }
        len=strSize;
        strcpy(p,s);
    }
    char *getstring(){
        return p;
    }
    int getlength(){
        return len;
    }
};
int main()
{
    strtype s;
    cout<<s.getlength()<<" string is "<<s.getstring()<<endl;
    strtype s2("This is a test",400);
    cout<<s2.getlength()<<" string is "<<s2.getstring()<<endl;
    strtype s3("I like c++",4);
    cout<<s.getlength()<<" string is "<<s.getstring()<<endl;
    return 0;
}