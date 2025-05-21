#include <iostream>
//P2193
//https://www.acmicpc.net/problem/2193
long long d[91];
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    d[1] = 1;
    d[2] = 1;
    for (int i = 3; i <= n; i++) {
        d[i] = d[i-1] + d[i-2];
    }
    std::cout << d[n] << '\n';
    return 0;
}
