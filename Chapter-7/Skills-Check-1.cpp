#include<iostream>
using namespace std;
class building{
    int floors;
    int rooms;
    double squareFootage;
    public:
    building(int f,int r,double d)
    {
        this->floors=f;
        this->rooms=r;
        this->squareFootage=d;
    }
    void showAll()
    {
        cout<<"Floors: "<<this->floors<<" rooms: "<<this->rooms<<" square footage: "<<squareFootage<<endl;
    }
};
class house:public building{
    int bedrooms;
    int bathrooms;
    public:
    house(int f,int r,double d,int bed,int bath):building(f,r,d)
    {
        this->bedrooms=bed;
        this->bathrooms=bath;
    }
    void showHouse(){
        showAll();
        cout<<"Bedrooms: "<<this->bedrooms<<" Bathrooms: "<<this->bathrooms<<endl;
    }
};
class office:public building{
    int fireExtenguishers;
    int numberTelephones;
    public:
    office(int f,int r,double d,int fireExten,int tele):building(f,r,d)
    {
        this->fireExtenguishers=fireExten;
        this->numberTelephones=tele;
    }
    void showOffice()
    {
        showAll();
        cout<<"Fire Extenguishers: "<<this->fireExtenguishers<<" telephone numbers: "<<this->numberTelephones<<endl;
    }
};
int main()
{
    house h(3,6,2000.00,2,2);
    h.showHouse();
    office o(10,50,30000.00,300,32456987);
    o.showOffice();
    return 0;
}