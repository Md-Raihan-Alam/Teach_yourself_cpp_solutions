#include<iostream>
using namespace std;
class base{
    int i,j;
    public:
    base(int a=0,int b=0){
        i=a;
        j=b;
    }
    void showij(){
        cout<<i<<" "<<j<<endl;
    }
};
class derived:public base{
    int k;
    public:
    derived(int a=0,int b=0,int c=0):base(a,b){
        k=c;
    }
    void show(){
        cout<<k<<" ";
        showij();
    }
};
int main()
{
    derived ob(1,2,3);
    ob.show();
    return 0;
}