#include<bits/stdc++.h>
using namespace std;
class line{
    int len;
    public:
    line(int x){
        len=x;
        for(int i=0;i<len;i++) cout<<"*";
    }
    ~line(){
        cout<<"\nDestructuring...";
    }
};
int main(){
    line l(20);
    return 0;
}