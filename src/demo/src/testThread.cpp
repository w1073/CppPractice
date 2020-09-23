#include <thread>
#include <mutex>
#include <iostream>

std::mutex gloab;

void threadfun1()
{
   // std::lock_guard<std::mutex> lock(gloab);

    std::cout << "thread id=" << std::this_thread::get_id() << std::endl;
    std::cout << "threadfun1 - 1" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "threadfun1 - 2" << std::endl;
}

void threadfun2(int iParam, std::string sParam)
{
   // std::lock_guard<std::mutex> lock(gloab);

    std::cout << "threadfun2 - 1" << std::endl;
    std::cout << "threadfun2 iParam=" << iParam << " sParam=" << sParam << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "threadfun2 - 2" << std::endl;
}

int main()
{
    std::thread t1(threadfun1);
    std::thread t2(threadfun2, 10, "abc");
    t1.join();//等待子线程结束
    std::cout << "join" << std::endl;
    t2.detach();//分离子线程
    std::cout << "detach" << std::endl;

    return 0;
}