#include<iostream>
#include<string>
using namespace std;
class airship{
    int passengers;
    int cargoAmount;
    public:
    airship(int p=3000,int c=3){
        this->passengers=p;
        this->cargoAmount=c;
    }
    void info(){
        cout<<"Total passengers="<<this->passengers<<" Total cargo amount="<<this->cargoAmount<<endl;
    }
};
class airplane:virtual public airship{
    string engineType;
    int range;
    public:
    airplane(int p,int c,int r=30000,string et="propeller"):airship(p,c)
    {
        this->engineType=et;
        this->range=r;
    }
    void airInfo(){
        info();
        cout<<"Engine Type="<<this->engineType<<" range="<<this->range<<endl;
    }
};
class ballon:virtual public airship{
    string gasType;
    int maxAttitude;
    public:
    ballon(int p,int c,int at=100,string gt="Hydrogen"):airship(p,c)
    {
        this->gasType=gt;
        this->maxAttitude=at;
    }
    void balInfo(){
        info();
        cout<<"Gas Type="<<this->gasType<<" max attitude "<<this->maxAttitude<<endl;
    }
};
int main()
{
    airplane plane(5000,200);
    ballon b(1000,300);
    plane.airInfo();
    b.balInfo();
    return 0;
}