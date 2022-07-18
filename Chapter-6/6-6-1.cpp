#include<iostream>
#include<cstdlib>
using namespace std;
class dynarray{
    int *p;
    int size;
    public:
    dynarray(int s){
        this->p=new int[s];
        if(!p){
            cout<<"Error in allocating memory";
            exit(1);
        }
        this->size=s;
    }
    int &put(int i)
    {
        if(i<0 || i>this->size){
            cout<<"out of boundary"<<endl;
            exit(1);
        }
        return p[i];
    }
    int get(int i)
    {
        if(i<0 || i>this->size){
            cout<<"out of boundary"<<endl;
            exit(1);
        }
        return p[i];
    }
    dynarray &operator=(dynarray &ob){
        if(ob.size!=size){
            cout<<"Cannot not create an allocation of such memory for this size of array\n";
            exit(1);
        }
        for(int i=0;i<size;i++) ob.p[i]=p[i];
        return *this;
    }
};
int main()
{
    dynarray ob(10),ob2(10),ob3(100);
    ob.put(3)=10;
    ob=ob2;
    cout<<ob2.get(3)<<endl;
    ob=ob3;
    return 0;
}