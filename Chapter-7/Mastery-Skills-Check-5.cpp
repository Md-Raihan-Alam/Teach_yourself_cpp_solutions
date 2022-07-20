#include<iostream>
using namespace std;
class planet{
    protected:
    double distance;
    int revolve;
    public:
    planet(double d,int r);
};
planet::planet(double d,int r)
{
    this->distance=d;
    this->revolve=r;
}
class earth:public planet{
    double circumference;
    public:
    earth(double d,int r):planet(d,r)
    {
        this->circumference=(2*r)*3.1416;
    }
    void show();
};
void earth::show(){
    cout<<"distance:"<<distance<<" revolve:"<<revolve<<" circumference:"<<circumference<<"\n";
}
int main()
{
    earth ob(93000000,365);
    ob.show();
    return 0;
}