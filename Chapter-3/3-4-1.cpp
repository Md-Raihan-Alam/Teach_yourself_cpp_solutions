#include<bits/stdc++.h>
using namespace std;
class pr2;
class pr1{
    int printing;
    public:
    pr1(){
        printing=0;
    }
    void set_ptr(int status){
        printing=status;
    }
    friend int inuse(pr1 pt,pr2 pt2);
};
class pr2{
    int printing;
    public:
    pr2(){
        printing=0;
    }
    void set_print(int status){
        printing=status;
    }
    friend int inuse(pr1 pt,pr2 pt2);
};
int inuse(pr1 pt,pr2 pt2){
    if(pt.printing!=0 || pt2.printing!=0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    pr1 p;
    pr2 p2;
    cout<<inuse(p,p2)<<endl;
    p.set_ptr(1);
    cout<<inuse(p,p2)<<endl;
    return 0;
}