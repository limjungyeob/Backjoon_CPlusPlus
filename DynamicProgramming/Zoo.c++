#include <iostream>
#include <algorithm>
//P1309
// https://www.acmicpc.net/problem/1309
int d[100001][3];
int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    d[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        d[i][0] = (d[i-1][0] + d[i-1][1] + d[i-1][2]);
        d[i][1] = (d[i-1][0] + d[i-1][2]);
        d[i][2] = (d[i-1][0] + d[i-1][1]);
        for(int j = 0; j < 3; j++) {
            d[i][j] %= 9901;
        }
    }
    std::cout << (d[n][0] + d[n][1] + d[n][2]) % 9901 << '\n';
    return 0;
}