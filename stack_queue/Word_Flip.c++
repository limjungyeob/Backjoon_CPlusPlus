#include<iostream>
#include<stack>
#include<string>

//P9093
// https://www.acmicpc.net/problem/9093
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    //ù ��° ��� ���� �ǳʶٱ� ���ؼ�
    std::cin.ignore();

    while(t--) {
        std::string str;
        std::getline(std::cin,str);
        str += '\n';
        std::stack<char> s;
        for(char ch : str) {
            if(ch==' ' || ch=='\n') {
                while(!s.empty()) {
                    std::cout<<s.top();
                    s.pop();
                }
                std::cout<<ch;
            } else {
                s.push(ch);
            }
        }
    }

    return 0;

}