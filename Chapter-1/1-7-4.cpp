#include<bits/stdc++.h>
using namespace std;
#define DELAY 1000000
void sleep(int a){
    int i;
    for(;a;a--)
        for(i=0;i<DELAY;i++) ;
}
void sleep(char *a){
    int i;
    int j;
    j=atoi(a);
    for(;j;j--)
        for(i=0;i<DELAY;i++) ;
}
int main(){
    cout<<"."<<endl;
    sleep(2);
    cout<<"."<<endl;
    sleep("3");
    return 0;
}