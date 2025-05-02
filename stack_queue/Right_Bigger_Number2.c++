#include<iostream>
#include<string>
#include<stack>
#include<vector>
//P17299
// https://www.acmecontest.org/problem/17299
int freq[1000001];
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    std::cin>>n;
    std::stack<int> s;
    std::vector<int> a(n);
    std::vector<int> ans(n);
    for(int i=0; i<n; i++) {
        std::cin>>a[i];
        freq[a[i]] += 1;
    }
    for(int i=0; i<n; i++) {
        while(!s.empty() && freq[a[s.top()]] < freq[a[i]]) {
            ans[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()) {
        ans[s.top()] = -1;
        s.pop();
    }
    for(int i=0; i<n; i++) {
        std::cout<<ans[i] << " ";
    }
}
