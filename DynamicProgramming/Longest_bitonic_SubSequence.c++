#include <iostream>
#include <algorithm>
#include <vector>
//P111504
//https://www.acmicpc.net/problem/11504
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> dp1(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp1[i] < dp1[j] + 1) {
                dp1[i] = dp1[j] + 1;
            }
        }
    }

    std::vector<int> dp2(n, 1);
    for (int i = n - 1; i >= 0; --i) {
        dp2[i] = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j] && dp2[i] < dp2[j] + 1) {
                dp2[i] = dp2[j] + 1;
            }
        }
    }

    int max_length = 0;
    for (int i = 0; i < n; ++i) {
        max_length = std::max(max_length, dp1[i] + dp2[i] - 1);
    }
    std::cout << max_length << '\n';

    return 0;
}