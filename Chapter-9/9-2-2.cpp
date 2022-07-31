#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    fstream file("phone.txt",ios::app);
    if(!file.is_open())
    {
        cout<<"Error opening file";
        exit(1);
    }
    char name[100];
    char phoneNumber[100];
    char ch;
    while(1){
        cout<<"Enter person name:";
        fgets(name,100,stdin);
        name[strcspn(name,"\n")]=0;
        cout<<"Enter person phone number:";
        fgets(phoneNumber,100,stdin);
        phoneNumber[strcspn(phoneNumber,"\n")]=0;
        file<<name<<", "<<phoneNumber<<endl;
        cout<<"want to enter more?(Y):";
        cin>>ch;
        fgetc(stdin);
        if(ch!='Y') break;
    }
    file.close();
    return 0;
}