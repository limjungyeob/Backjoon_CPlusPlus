#include <iostream>
#include <algorithm>

int d[1001][3];
int a[1001][3];

int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j = 0; j < 3; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        d[i][0] = std::min(d[i-1][1], d[i-1][2]) + a[i][0];
        d[i][1] = std::min(d[i-1][0], d[i-1][2]) + a[i][1];
        d[i][2] = std::min(d[i-1][0], d[i-1][1]) + a[i][2];
    }
    std::cout<< std::min({d[n][0], d[n][1], d[n][2]}) << '\n';
    return 0;
}