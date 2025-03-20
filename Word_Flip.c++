#include<iostream>
#include<stack>
#include<string>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    //첫 번째 상수 값을 건너뛰기 위해서
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