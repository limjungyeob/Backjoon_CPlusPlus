#include <iostream>
#include<vector>
#include<algorithm>

int main() {
    int n;
    std::cin>>n;
    std::vector<int> a(n);
    for(int i=0; i<n; i++) {
        std::cin>>a[i];
    }
    std::vector<int> d(n);
    for(int i=0; i<n; i++) {
        d[i] = a[i];
        //j가 순회하면서 값 탐색.
        for(int j=0; j<i; j++) {
            //증가 수열 조건 + j에서 끝나는 최적합 d[j] 뒤에 a[i]를 붙이는게 더 크면 갱신
            if(a[j] < a[i] && d[i] < d[j] + a[i]) {
                d[i] = d[j] + a[i];
            }
        }
    }
    int ans = *std::max_element(d.begin(), d.end());
    std::cout<<ans<<'\n';
    return 0;
}