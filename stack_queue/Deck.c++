#include<iostream>
#include<deque>
#include<string>
//P10866
// https://www.acmecontest.org/problem/10866
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin>>n;
    std::deque<int> dequeue;
    while(n--) {
        std::string cmd;
        std::cin >> cmd;
        if(cmd == "push_front") {
            int num;
            std::cin>>num;
            dequeue.push_front(num);
        } else if(cmd == "push_back") {
            int num;
            std::cin>>num;
            dequeue.push_back(num);
        } else if(cmd == "pop_front") {
            if(!dequeue.empty()) {
                std::cout<<dequeue.front()<<'\n';
                dequeue.pop_front();
            } else {
                std::cout<<-1<<'\n';
            }
        } else if(cmd == "pop_back") {
            if(!dequeue.empty()) {
                std::cout<<dequeue.back()<<'\n';
                dequeue.pop_back();
            } else {
                std::cout<<-1<<'\n';
            }
        } else if(cmd == "size") {
            std::cout<<dequeue.size()<<'\n';
        } else if(cmd == "empty") {
            std::cout<<dequeue.empty()<<'\n';
        } else if(cmd == "front") {
            if(!dequeue.empty()) {
                std::cout<<dequeue.front()<<'\n';
            } else {
                std::cout<<-1<<'\n';
            }
        } else if(cmd == "back") {
            if(!dequeue.empty()) {
                std::cout<<dequeue.back()<<'\n';
            } else {
                std::cout<<-1<<'\n';
            }
        }
    }
    return 0;
}