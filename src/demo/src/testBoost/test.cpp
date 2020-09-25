#include <iostream>
#include <boost/thread/thread.hpp>
#include <boost/timer.hpp>

using namespace std;
using namespace boost;

void hello()
{
    cout<<"hello boost"<<endl;
}

int main()
{
    timer t;
    boost::thread thrd(&hello);
    thrd.join();

    cout<<t.elapsed_max()/3600<<endl;//最大时间，单位：小时
    cout<<t.elapsed_min()<<endl; //最小统计时间，单位：秒
    cout<<t.elapsed()<<endl;//从建立对象开始，时间流失统计


    return 0;
}
