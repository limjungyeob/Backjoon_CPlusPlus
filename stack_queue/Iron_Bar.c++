#include<iostream>
#include<string>
#include<stack>
//P10799
// https://www.acmicpc.net/problem/10799
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int cnt =0;
    std::stack<int> s;
    std::string str = "";
    std::cin>>str;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(' && str[i+1] == ')') {
            cnt += s.size();
            i++;
        } else if(str[i] =='(') {
            s.push(i);
        } else if(str[i] == ')') {
            cnt++;
            s.pop();
        }
    }
    std::cout<<cnt;
    return 0;
}