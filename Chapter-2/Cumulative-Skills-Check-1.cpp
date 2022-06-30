#include<bits/stdc++.h>
using namespace std;
class prompt{
    int count;
    public:
    prompt(string str){
        cout<<str;
        cin>>count;
    }
    ~prompt(){
        cout<<"Destructuring...";
        for(int i=0;i<count;i++) cout<<'\a';
    }
};
int main()
{
    prompt ob("Enter a number");
    return 0;
}