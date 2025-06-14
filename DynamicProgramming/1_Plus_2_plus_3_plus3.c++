#include<iostream>
//P15988
// https://www.acmicpc.net/problem/15988
long long d[1000001];
const long long mod = 1000000009LL;
int main() {
    d[0] = 1;
    for (int i=1; i<=1000000; i++) {
        if (i-1 >= 0) {
            d[i] += d[i-1];
        }
        if (i-2 >= 0) {
            d[i] += d[i-2];
        }
        if (i-3 >= 0) {
            d[i] += d[i-3];
        }
        d[i] %= mod;
    }
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << d[n] << '\n'; 
    }
}