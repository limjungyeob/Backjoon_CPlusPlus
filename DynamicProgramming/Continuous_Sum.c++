#include<iostream>
#include<vector>
#include<algorithm>
//https://www.acmicpc.net/problem/1912
// P1912
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for(int i=0; i < n; i++) {
        std::cin >> A[i];
    }
    std::vector<int> D(n);

    for(int i = 0; i < n; i++) {
        D[i] = A[i];
        if( i ==0 ) {
            continue;
        }
        if(D[i] < D[i-1] + A[i]) {
            D[i] = D[i-1] + A[i];
        }
    }
    int max_length = *std::max_element(D.begin(), D.end());

    std::cout << max_length << '\n';
    return 0;

}
