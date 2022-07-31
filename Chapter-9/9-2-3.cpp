#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
    fstream file("COUNT-WORD.txt",ios::in);
    if(!file)
    {
        cout<<"Error in reading file";
        exit(1);
    }
    int wordCount=0;
    char ch;
    file.unsetf(ios::skipws);
    while(!file.eof())
    {
        file>>ch;
        if(isspace(ch))
            wordCount++;
    }
    wordCount++;//for the last word
    cout<<"Total word "<<wordCount<<endl;
    return 0;
}