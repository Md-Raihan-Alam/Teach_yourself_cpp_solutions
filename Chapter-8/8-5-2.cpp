#include<iostream>
using namespace std;
class planet{
    protected:
    double distance;//miles from the sun
    int revolve;//in days
    public:
    planet(double d,int r){
        distance=d;
        revolve=r;
    }
};
class earth:public planet{
    double circumfrence;//circumference of orbit
    public:
    earth(double d,int r):planet(d,r)
    {
        circumfrence=2*distance*3.1416;
    }
    friend ostream &operator<<(ostream &stream,earth &ob)
    {
        cout<<"Distance: "<<ob.distance<<endl;
        cout<<"Days in obit: "<<ob.revolve<<endl;
        cout<<"Circumference of orbit: "<<ob.circumfrence<<endl;
        return stream;
    }
};
int main()
{
    earth ob(93000000,365);
    cout<<ob;
    return 0;
}