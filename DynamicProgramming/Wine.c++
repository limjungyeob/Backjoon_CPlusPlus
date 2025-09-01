//https://www.acmicpc.net/problem/2156
// P2156
#include <iostream>

int a[10001];
int d[10001];

int main() {
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }
    d[1] = a[1];
    d[2] = a[1] + a[2];
    for(int i = 3; i <= n; i++) {
        d[i] = d[i-1];
        if(d[i] < d[i-2] + a[i]) {
            d[i] = d[i-2] + a[i];
        }

        if(d[i] < d[i-3] + a[i-1] + a[i]) {
            d[i] = d[i-3] + a[i-1] + a[i];
        }
    }

    std::cout << d[n] << '\n';
    return 0;
}