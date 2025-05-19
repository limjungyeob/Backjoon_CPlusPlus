#include <iostream>
//P10844
//https://www.acmicpc.net/problem/10844
long long d[101][10];
long long mod = 1000000000;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    for (int i = 1; i <= 9; i++) {
        d[1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            d[i][j] = 0;
            if (j-1 >= 0) {
                d[i][j] += d[i-1][j-1];
            }
            if (j+1 <= 9) {
                d[i][j] += d[i-1][j+1];
            }
            d[i][j] %= mod;
        }
    }
    long long ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans += d[n][i];
    }
     ans %= mod;
    std::cout << ans << '\n';
}