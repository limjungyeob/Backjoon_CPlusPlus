#include<iostream>
#include<stack>
#include<string>
//P1874
// https://www.acmecontest.org/problem/1874
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::stack<int> s;
    int n;
    std::string ans;

    std::cin >> n;
    int m = 0;
    while(n--) {
        int x;
        std::cin>>x;
        if(x > m) {
            while(x > m) {
                s.push(++m);
                ans += '+';
            }

            s.pop();
            ans += '-';
        } else {
            bool found = false;
            if(!s.empty()) {
                int top = s.top();
                s.pop();
                ans += '-';
                if(x == top) {
                    found = true;
                }
            }
            if(!found) {
                std::cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    for(auto x : ans) {
        std::cout<<x<<'\n';
    }

    return 0;

}