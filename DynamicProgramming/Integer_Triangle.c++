//P1932
//https://www.acmicpc.net/problem/1932
#include <iostream>
#include <algorithm>

int a[500][500];
int d[500][500];

int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            std::cin>>a[i][j];
        }
    }

    d[0][0] = a[0][0];
    for(int i=1; i<n; i++) {
        for(int j=0; j<=i; j++) {
            d[i][j] = d[i-1][j] + a[i][j];
            if(j-1 >= 0 && d[i][j] < d[i-1][j-1] + a[i][j]) {
                d[i][j] = d[i-1][j-1] + a[i][j];
            }
        }
    }

    int ans = d[n-1][0];
    for(int i=0; i<n; i++) {
        if(ans < d[n-1][i]) {
            ans = d[n-1][i];
        }
    }

    std::cout<<ans<<'\n';
    return 0;
}