#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
    fstream fin(argv[1],ios::in);
    fstream fout(argv[2],ios::out);
    if(argc!=3)
    {
        cout<<"file_name input_file output_file";
        exit(1);
    }
    if(!fin)
    {
        cout<<"Failed to open input file";
        exit(1);
    }
    if(!fout)
    {
        cout<<"Failed to open output file";
        exit(1);
    }
    unsigned int count=0;
    char ch;
    fin.unsetf(ios::skipws);
    while(!fin.eof())
    {
        fin>>ch;
        if(!fin.eof())
        {
            fout<<ch;
            count++;
        }
    }
    cout<<"The total copied "<<count<<endl;
    fin.close();
    fout.close();
    return 0;
}