#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main(int argc,char *argv[])
{
    fstream fileOne(argv[1],ios::in);
    fstream fileTwo(argv[2],ios::out);
    fstream fileThree(argv[3],ios::in);
    if(argc!=4)
    {
        cout<<"program_name file_one copy_file read_word_file";
        exit(1);
    }
    //ex-1
    if(!fileOne){
        cout<<"Error opeing file file"<<endl;
        exit(1);
    }
    if(!fileTwo){
        cout<<"Error creating copy file"<<endl;
        exit(1);
    }
    unsigned int copy=0;
    char ch;
    fileOne.unsetf(ios::skipws);
    while(!fileOne.eof())
    {
        fileOne.get(ch);
        if(!fileOne.eof()){
            fileTwo.put(ch);
            copy++;
        }
    }
    fileOne.close();
    fileTwo.close();
    cout<<"Total size of copy "<<copy<<endl;
    //ex-2
    if(!fileThree){
        cout<<"Error writing file four"<<endl;
        exit(1);
    }
    int word=0;
    char ch2;
    fileThree.unsetf(ios::skipws);
    //only being surround by word is count as word
    while(!fileThree.eof())
    {
        fileThree.get(ch2);
        if(!fileThree.eof())
        {
            if(isspace(ch2))
                word++;
        }
    }
    word++;
    cout<<"Total word="<<word<<endl;
    fileThree.close();
    return 0;
}