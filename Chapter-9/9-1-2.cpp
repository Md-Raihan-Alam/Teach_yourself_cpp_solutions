#include<iostream>
using namespace std;
ostream &sethex(ostream &stream)
{
    stream.unsetf(ios::dec|ios::oct);
    stream.setf(ios::hex|ios::uppercase|ios::showbase);
    return stream;
}
ostream &reset(ostream &stream)
{
    stream.unsetf(ios::hex|ios::uppercase|ios::showbase);
    stream.setf(ios::dec|ios::oct);
    return stream;
}
int main()
{
    cout<<sethex<<100023<<endl;
    cout<<reset<<1000023<<endl;
    return 0;
}