#include<iostream>
using namespace std;
class box{
    int square;
    public:
    box(int s=0)
    {
        this->square=s;
    }
    friend ostream &operator<<(ostream &stream,box &b)
    {
        stream<<"Square of the box is "<<b.square<<endl;
        return stream;
    }
};
int main()
{
    box b(5);
    cout<<b;
    return 0;
}