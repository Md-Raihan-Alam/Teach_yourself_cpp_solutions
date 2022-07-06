#include<bits/stdc++.h>
using namespace std;
class letters{
    char ch;
    public:
    letters(char c){
        ch=c;
    }
    char get_ch(){
        return ch;
    }
};
int main()
{
    letters lt[10]={'a','b','c','d','e','f','g','h','i','j'};
    int i;
    for(i=0;i<10;i++) cout<<lt[i].get_ch()<<" ";
}