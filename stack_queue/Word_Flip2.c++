#include<iostream>
#include<stack>
#include<string>
//P17413
//https://www.acmicpc.net/problem/17413
void print(std::stack<char> &s) {
    while(!s.empty()) {
        std::cout<<s.top();
        s.pop();
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::stack<char> s;
    bool tag = false;
    std::string str;
    std::getline(std::cin,str);
    for(char ch : str) {
        if(ch == '<') {
            print(s);
            tag = true;
            std::cout<<ch;
        } else if( ch == '>') {
            tag = false;
            std::cout<<ch;
        } else if(tag) {
            std::cout<<ch;
        } else {
            if(ch==' ') {
                print(s);
                std::cout<<ch;
            } else {
                s.push(ch);
            }
        }
    }
    print(s);
    return 0;

}