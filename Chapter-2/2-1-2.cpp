#include<bits/stdc++.h>
using namespace std;
class stopwatch{
    double beginTime,endTime;
    public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
};
stopwatch::stopwatch(){
    beginTime=endTime=0.0;
}
stopwatch::~stopwatch(){
    cout<<"Destructuring.."<<endl;
}
void stopwatch::start(){
    beginTime=(double) clock();
}
void stopwatch::stop(){
    endTime=(double) clock();
}
void stopwatch::show(){
    cout<<"Time finished "<<endTime-beginTime<<endl;
}
int main()
{
    stopwatch sw;
    sw.start();
    for(int i=0;i<100000000;i++) ;
    sw.stop();
    sw.show();
    return 0;
}