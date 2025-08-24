//https://www.acmicpc.net/problem/9465
//P9465
#include <iostream>
#include <algorithm>
long long a[100001][2];
long long d[100001][3];


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        for (int i=1; i<=n; i++) {
            std::cin >> a[i][0];
        }
        for (int i=1; i<=n; i++) {
            std::cin >> a[i][1];
        }
        d[0][0] = d[0][1] = d[0][2] = 0;
        for (int i=1; i<=n; i++) {
            d[i][0] = std::max({d[i-1][0],d[i-1][1],d[i-1][2]});
            d[i][1] = std::max(d[i-1][0],d[i-1][2])+a[i][0];
            d[i][2] = std::max(d[i-1][0],d[i-1][1])+a[i][1];
        }
        long long ans = std::max({d[n][0], d[n][1], d[n][2]});
        std::cout << ans << '\n';
    }
    return 0;
}