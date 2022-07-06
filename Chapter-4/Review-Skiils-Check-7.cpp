#include<bits/stdc++.h>
using namespace std;
class myclass{
    int num;
    public:
    myclass(int x){
        num=x;
    }
    friend bool isneg(myclass cs);
};
bool isneg(myclass cs){
    return cs.num>0?true:false;
}
int main()
{
    myclass cl(5);
    cout<<isneg(cl)<<endl;
    myclass cl2(-3);
    cout<<isneg(cl2)<<endl;
    return 0;
}