#include<iostream>
#include<stack>
#include<string>
//P1918
// https://www.acmicpc.net/problem/1918
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::stack<char> stack;
    std::string s;
    std::cin>>s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            std::cout<<s[i];
        } else {
            if(s[i] == '(') {
                stack.push(s[i]);
            }else if(s[i] == '*' || s[i] == '/') {
                while(!stack.empty() && (stack.top() == '*' || stack.top() == '/')) {
                    std::cout<<stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
            }else if(s[i] == '+' || s[i] == '-') {
                while(!stack.empty() && stack.top() != '(') {
                    std::cout<<stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
            } else if(s[i] == ')') {
                while(!stack.empty() && (stack.top() != '(')) {
                    std::cout<<stack.top();
                    stack.pop();
                }
                stack.pop();
            }
        }
    }
    while(!stack.empty()) {
        std::cout<<stack.top();
        stack.pop();
    }
    

    return 0;

}