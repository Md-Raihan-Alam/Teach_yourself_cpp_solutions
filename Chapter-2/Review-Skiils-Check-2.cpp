#include<bits/stdc++.h>
using namespace std;
class personInfo{
    string personName;
    string personAddress;
    public:
    void store(string name,string address);
    void display();
};
void personInfo::store(string name,string address){
    personName=name;
    personAddress=address;
}
void personInfo::display(){
    cout<<"Person name is "<<personName<<endl<<"Address is "<<personAddress<<endl;
}
int main()
{
    personInfo PI;
    string nm,ad;
    cout<<"Enter a name ";
    getline(cin,nm);
    cout<<"Enter a address ";
    getline(cin,ad);
    PI.store(nm,ad);
    PI.display();
    return 0;
}