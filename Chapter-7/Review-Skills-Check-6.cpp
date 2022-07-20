#include<iostream>
using namespace std;
class array{
    int nums[10];
    public:
    array();
    void set(int n[10]);
    void show();
    array operator+(array ob2);
    array operator-(array ob2);
    int operator==(array ob2);
    array operator++();
    friend array operator--(array &ob2);
};
array::array(){
    int i;
    for(i=0;i<10;i++) nums[i]=0;
}
void array::set(int *n)
{
    int i;
    for(i=0;i<10;i++) nums[i]=n[i];
}
void array::show()
{
    for(int i=0;i<10;i++)
        cout<<nums[i]<<" ";
    cout<<"\n";
}
array array::operator+(array ob2)
{
    array temp;
    for(int i=0;i<10;i++)
    {
        temp.nums[i]=nums[i]+ob2.nums[i];
    }
    return temp;
}
array array::operator-(array ob2)
{
    array temp;
    for(int i=0;i<10;i++){
        temp.nums[i]=nums[i]-ob2.nums[i];
    }
    return temp;
}
int array::operator==(array ob2)
{
    int flag=1;
    for(int i=0;i<10;i++){
        if(nums[i]!=ob2.nums[i])
            flag=0;
    }
    return flag;
}
array array::operator++()
{
    for(int i=0;i<10;i++)
    {
        nums[i]++;
    }
    return *this;
}
array operator--(array &ob2){
    for(int i=0;i<10;i++)
    {
        ob2.nums[i]--;
    }
    return ob2;
}
int main()
{
    array o1,o2,o3;
    int i[10]={1,2,3,4,5,6,7,8,9,10};
    o1.set(i);
    o2.set(i);
    o3=++o1;
    o3.show();
    o3=--o2;
    o3.show();
    // o3=o1+o2;
    // o3.show();
    // o3=o1-o3;
    // o3.show();
    // if(o1==o2) cout<<"o1 equals o2\n";
    // else cout<<"o1 does no equal o2\n";
    // if(o1==o3) cout<<"o1 equals o3\n";
    // else cout<<"o1 does not equal o3\n";
    return 0;
}