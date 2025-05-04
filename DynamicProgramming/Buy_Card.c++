#include<iostream> 
#include<vector>
//P11052
//https://www.acmicpc.net/problem/11052

int main()  {
    int n;
    std::cin >> n;
    std::vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        std::cin >> arr[i];
    }
    std::vector<int> dp(n+1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = std::max(dp[i], dp[i-j] + arr[j]);
        }
    }
    std::cout << dp[n] << '\n';
    return 0;
}