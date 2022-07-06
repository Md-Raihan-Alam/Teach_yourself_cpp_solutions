#include<bits/stdc++.h>
using namespace std;
class summation{
    int num;
    long sum;//summation of num
    public:
    void set_num(int n);
    void show_sum(){
        cout<<num<<" summed is "<<sum<<endl;
    }
};
void summation::set_num(int n)
{
    long i;
    num=n;
    sum=0;
    for(i=1;i<=num;i++) {
        sum+=i;
        // cout<<sum<<endl;
    }
}
summation make_sum(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    summation sm;
    sm.set_num(number);
    return sm;
}
int main()
{
    // make_sum();
    summation sm=make_sum();
    sm.show_sum();
    return 0;
}