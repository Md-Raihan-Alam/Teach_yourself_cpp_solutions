#include<bits/stdc++.h>
using namespace std;
void rev_str(char *s1)
{
    char revStr[strlen(s1)];
    int j=0;
    for(int i=strlen(s1)-1;i>=0;i--){
        revStr[j]=s1[i];
        j++;
    }
    revStr[j]='\0';
    cout<<revStr<<endl;
}
void rev_str(char *s1,char *s2){
    char revStr[strlen(s2)];
    int j=0;
    for(int i=strlen(s2)-1;i>=0;i--){
        revStr[j]=s2[i];
        j++;
    }
    revStr[j]='\0';
    cout<<revStr<<endl;
}
int main()
{
    rev_str("Hello");
    rev_str("Hello","Raihan");
    return 0;
}