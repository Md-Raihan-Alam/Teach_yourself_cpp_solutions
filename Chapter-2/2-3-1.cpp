#include<bits/stdc++.h>
using namespace std;
class area_cl{
    public:
    double height;
    double width;
};
class rectangle:public area_cl{
    public:
    rectangle(double h,double w){
        height=h;
        width=w;
    }
    void area();
};
class isosceles:public area_cl{
    public:
    isosceles(double d,double w){
        height=d;
        width=w;
    }
    void area();
};
void rectangle::area(){
    cout<<"Area is "<<height*width<<endl;
}
void isosceles::area(){
    cout<<"Area is "<<0.5*height*width<<endl;
}
int main()
{
    rectangle r(10.00,10.00);
    isosceles i(4.00,5.00);
    r.area();
    i.area();
    return 0;
}