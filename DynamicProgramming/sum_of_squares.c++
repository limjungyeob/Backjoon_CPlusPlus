#include<iostream>
//https://www.acmicpc.net/problem/1699
// P1699

int d[100001];
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        d[i] = i;
        for(int j = 1; j * j <= i; j++) {
            if(d[i] > d[i - j * j] + 1) {
                d[i] = d[i - j * j] + 1;
            }
        }
    }

    std::cout << d[n] << '\n';
    return 0;
}