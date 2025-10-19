#include<iostream>
//https://www.acmicpc.net/problem/2133
// P2133
long long d[31]; 

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    d[0] = 1;
    for(int i = 2; i <= n; i += 2) {
        d[i] = d[i-2] * 3;
        //3*d[i-2]
        for(int j=i-4; j >=0; j -= 2) {
            d[i] += d[j] * 2;   //+ 2*(d[i-4] + d[i-6] + ... + d[0])
        }
    }

    std::cout << d[n] << '\n';

    return 0;
}