#include<iostream>
using namespace std;
class A{
    int i;
    public:
    A(int a){
        i=a;
    }
    int getA(){
        return i;
    }
};
class B{
    int j;
    public:
    B(int a)
    {
        j=a;
    }
    int getB(){
        return j;
    }
};
class C:public A,public B{
    int k;
    public:
    C(int a,int b,int c):A(b),B(c)
    {
        k=a;
    }
    void value(){
        cout<<getA()<<" "<<getB()<<" "<<k<<endl;
    }
};
int main()
{
    C ob(1,2,3);
    ob.value();
    return 0;
}