#include <iostream>
#include <algorithm>
int arr[1000];
int dp[1000];
int v[1000];
//P14002
//https://www.acmicpc.net/problem/14002
void go(int p) {
    // ? -> ? -> ... a[v[p]] -> a[p]
    // ---------------------
    //        go(v[p]);
    if (p == -1) {
        return ;
    }
    go(v[p]);
    std::cout << arr[p] << ' ';
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        v[i] = -1;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                v[i] = j; // Store the previous index for reconstruction
            }
        }
    }
    int ans = dp[0];
    int p = 0;
    for (int i=0; i<n; i++) {
        if (ans < dp[i]) {
            ans = dp[i];
            p = i;
        }
    }
    std::cout << ans << '\n';
    go(p);
    std::cout << '\n';
    return 0;
}