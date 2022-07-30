#include<iostream>
using namespace std;
class pwr{
    int base;
    int exponent;
    double result;//base to the exponent power
    public:
    pwr(int b,int e);
    friend ostream &operator<<(ostream &stream,pwr &ob)
    {
        stream<<"Base:"<<ob.base<<" Exponent:"<<ob.exponent<<" Result:"<<ob.result<<endl;
        return stream;
    }
    friend istream &operator>>(istream &stream,pwr &ob)
    {
        cout<<"Enter base:";
        stream>>ob.base;
        cout<<"Enter exponent:";
        stream>>ob.exponent;
        int e=ob.exponent;
        ob.result=1;
        for(;e;e--)
            ob.result=ob.result*ob.base;    
    }
};
pwr::pwr(int b,int e)
{
    base=b;
    exponent=e;
    result=1;
    for(;e;e--)
        result=result*base;
}
int main()
{
    pwr pw(5,6);
    cout<<pw;
    cin>>pw;
    cout<<pw;
}