#include<bits/stdc++.h>
using namespace std;
class card{
    public:
    string booksTitle;
    string booksAuthor;
    int numberOfCopies;
    void store(string title,string author,int copies);
    void show();
};
void card::store(string title,string author,int copies){
    booksTitle=title;
    booksAuthor=author;
    numberOfCopies=copies;
}
void card::show(){
    cout<<"Book name="<<booksTitle<<" Author name="<<booksAuthor<<" Number of copies="<<numberOfCopies;
}
int main()
{
    card cd;
    string bt,ba;
    int nc;
    cout<<"Enter book name:";
    getline(cin,bt);
    cout<<"Enter books author name:";
    getline(cin,ba);
    cout<<"Enter number of copies:";
    cin>>nc;
    cd.store(bt,ba,nc);
    cd.show();
    return 0;
}