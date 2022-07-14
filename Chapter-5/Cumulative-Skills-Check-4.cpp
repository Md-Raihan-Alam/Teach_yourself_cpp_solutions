#include<iostream>
using namespace std;
class samp{
    int a;
    public:
    samp(int x){
        this->a=x;
    }
    samp(){
        this->a=0;
    }
    int get_a(){
        return this->a;
    }
};
int main()
{
    samp ob(88);
    samp obarray[10];
    cout<<"ob single value "<<ob.get_a()<<endl;
    cout<<"ob array"<<endl;
    for(int i=0;i<10;i++) cout<<obarray[i].get_a()<<" ";
    return 0;
}