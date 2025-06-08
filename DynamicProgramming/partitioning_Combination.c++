#include <iostream>
//https://www.acmicpc.net/problem/2225
// P2225
long long d[201][201];
long long mod = 1000000000;
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    d[0][0] = 1LL;
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            for(int l = 0; l <= j; l++) {
                d[i][j] += d[i - 1][j - l];
                d[i][j] %= mod;
            }
        }
    }
    std::cout << d[k][n] << '\n';
    return 0;
}