#include<iostream>
#include<cstring>
using namespace std;
class mybase{
    char str[80];
    public:
    mybase(char *s){
        strcpy(str,s);
    }
    char *get()
    {
        return str;
    }
};
class myderived:public mybase{
    int len;
    public:
    myderived(char *s):mybase(s)
    {
        len=strlen(s);
    }
    int getlen(){
        return len;
    }
    void show(){
        cout<<get()<<endl;
    }
};
int main()
{
    myderived ob("Hello");
    ob.show();
    cout<<ob.getlen()<<endl;
    return 0;
}