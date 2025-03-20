#include<iostream>
#include<stack>
#include<string>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::stack<char> left,right;
    std::string a = "";
    std::cin>>a;
    for(int i=0; i<(int)a.size(); i++) {
        left.push(a[i]);
    }
    int m;
    std::cin>>m;
    while(m--) {
        char cmd,output;
        std::cin>>cmd;
        if(cmd == 'L') {
            if(!left.empty()) {
                right.push(left.top());
                left.pop();
            }
        } else if(cmd == 'D') {
            if(!right.empty()) {
                left.push(right.top());
                right.pop();
            }
        } else if(cmd == 'B') {
            if(!left.empty()) {
                left.pop();
            }
        } else if(cmd == 'P') {
            std::cin>>output;
            left.push(output);
        }

    }
    // left에 있는 원소들 모두 right로 이동!
    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }

    // right에 있는 원소 출력
    while (!right.empty())
    {
        std::cout << right.top();
        right.pop();
    }
    return 0;

}