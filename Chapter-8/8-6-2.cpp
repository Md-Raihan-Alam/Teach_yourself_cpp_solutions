#include<iostream>
using namespace std;
class ineFactor{
    int val;
    int lowestFactor;
    public:
    ineFactor(int a=0){
        this->val=a;
        this->lowestFactor=this->val;
        for(int i=a;i>0;i--)
            if(val%i==0)
                if(this->lowestFactor>i)
                    this->lowestFactor=i;
    }
    friend ostream &operator<<(ostream &stream,ineFactor &ob);
    friend istream &operator>>(istream &stream,ineFactor &ob);
};
ostream &operator<<(ostream &stream,ineFactor &ob)
{
    stream<<ob.val<<" "<<ob.lowestFactor<<endl;
    return stream;
}
istream &operator>>(istream &stream,ineFactor &ob)
{
    stream>>ob.val;
    int a=ob.val;
    ob.lowestFactor=ob.val;
        for(int i=a;i>1;i--)
            if(ob.val%i==0)
                if(ob.lowestFactor>i)
                    ob.lowestFactor=i;
    return stream;
}
int main()
{
    ineFactor ob;
    cin>>ob;
    cout<<ob;
    return 0;
}