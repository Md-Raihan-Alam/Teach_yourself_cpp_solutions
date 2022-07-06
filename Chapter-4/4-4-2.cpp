#include<bits/stdc++.h>
using namespace std;
class perInfo{
    string name;
    string telephoneNumber;
    public:
    void setInfo(string n,string t){
        this->name=n;
        this->telephoneNumber=t;
    }
    void showInfo(){
        cout<<this->name<<" "<<this->telephoneNumber<<endl;
    }
};
int main()
{
    perInfo *person;
    person=new perInfo;
    if(!person){
        cout<<"Error creating memory";
        return 0;
    }
    person->setInfo("Raihan Alam","01321814174");
    person->showInfo();
    delete person;
    return 0;
}