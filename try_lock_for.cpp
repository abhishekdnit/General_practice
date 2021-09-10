#include <mutex>
#include <thread>
#include <iostream>
#include <chrono>
using namespace std;

timed_mutex m;
int x=0;
void fun(int i)
{
    if(m.try_lock_for(chrono::seconds(2)))
    {
    ++x;
    this_thread::sleep_for(chrono::seconds(1));
    m.unlock();
    cout<<"Thread "<<i<<" entered\n";
    }
    else
        cout<<"Thread "<<i<<" couldn't able to enter.\n";
}

int main()
{
    thread t1(fun,1);
    thread t2(fun,2);

    t1.join();
    t2.join();
    cout<<"x ="<<x;

}
