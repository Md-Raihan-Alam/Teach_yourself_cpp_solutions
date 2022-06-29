#include<bits/stdc++.h>
using namespace std;
class box{
    double a,b,c;
    double volume;
    public:
    box(double v1,double v2,double v3);
    void vol();
};
box::box(double v1,double v2,double v3){
    a=v1;
    b=v2;
    c=v3;
    volume=a*b*c;
}
void box::vol(){
    cout<<"Volume="<<volume<<endl;
}
int main()
{
    box v(23.44,12.33,6.4);
    v.vol();
    return 0;
}