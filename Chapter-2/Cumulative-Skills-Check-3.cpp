#include<bits/stdc++.h>
using namespace std;
class dice{
    int var;
    public:
    void roll(){
        srand(time(0));
        var=(rand()%6)+1;
        cout<<var<<endl;
    }
};
int main(){
    dice d;
    d.roll();
}