#include<bits/stdc++.h>
using namespace std;
class area_cl{
    public:
    double height,width;
};
class cylinder:public area_cl{
    public:
    cylinder(double h,double w){
        height=h;
        width=w/2;
    }
    void area(){
        cout<<"The area is "<<2*3.1416*(width*width)+3.1416*width*height<<endl;;
    }
};
int main(){
    cylinder cl(40.00,65.45);
    cl.area();
    return 0;
}