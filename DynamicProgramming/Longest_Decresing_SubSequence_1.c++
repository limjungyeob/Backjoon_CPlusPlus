#include <iostream>
#include <algorithm>
#include <vector>
//P11722
//https://www.acmicpc.net/problem/11722
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int max_length = *std::max_element(dp.begin(), dp.end());
    std::cout << max_length << '\n';
    
    return 0;
}