#include<bits/stdc++.h>
using namespace std;
class a_type{
    double a,b;
    public:
    a_type(double x,double y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    a_type ob[5][2]={
        a_type(1,2),a_type(3,4),
        a_type(5,6),a_type(7,8),
        a_type(9,10),a_type(11,12),
        a_type(13,14),a_type(15,16),
        a_type(17,18),a_type(19,20)
    };
    int i,j;
    for(i=0;i<5;i++)
        for(j=0;j<2;j++)
            ob[i][j].show();
    return 0;
}