#include<iostream>
#include<vector>
#include<algorithm>
//https://www.acmicpc.net/problem/13398
// P13398
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for(int i=0; i < n; i++) {
        std::cin >> A[i];
    }
    std::vector<int> DL(n);
    std::vector<int> DR(n);

    for(int i = 0; i < n; i++) {
        DL[i] = A[i];
        if( i ==0 ) {
            continue;
        }
        if(DL[i] < DL[i-1] + A[i]) {
            DL[i] = DL[i-1] + A[i];
        }
    }

    for(int i = n-1; i >= 0; i--) {
        DR[i] = A[i];
        if( i == n-1 ) {
            continue;
        }
        if(DR[i] < DR[i+1] + A[i]) {
            DR[i] = DR[i+1] + A[i];
        }
    }

    int ans = DL[0];
    for (int i=1; i<n; i++) {
        if (ans < DL[i]) {
            ans = DL[i];
        }
    }
    for (int i=1; i<n-1; i++) {
        if (ans < DL[i-1] + DR[i+1]) {
            ans = DL[i-1] + DR[i+1];
        }
    }
    std::cout << ans << '\n';

    return 0;

}