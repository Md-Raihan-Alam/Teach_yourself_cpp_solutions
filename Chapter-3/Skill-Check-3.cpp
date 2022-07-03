#include<bits/stdc++.h>
using namespace std;
class planet{
    int moons;
    double dist_from_sun;//in miles
    double diameter;
    double mass;
    public:
    planet(double miles){
        dist_from_sun=miles;
    }
    double get_miles(){
        return dist_from_sun;
    }
    friend double light(planet pt);
};
double light(planet pt){
    return pt.dist_from_sun/186000;
}
int main()
{
    planet p(56700000);
    cout<<light(p)<<endl;
    return 0;
}