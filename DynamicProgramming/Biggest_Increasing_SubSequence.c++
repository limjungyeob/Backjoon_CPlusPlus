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
        //Iterate over j to check values.
        for(int j=0; j<i; j++) {
            //If the increasing subsequence condition is satisfied and appending a[i] after the optimal sum ending at j (d[j]) gives a larger result, update it.
            if(a[j] < a[i] && d[i] < d[j] + a[i]) {
                d[i] = d[j] + a[i];
            }
        }
    }
    int ans = *std::max_element(d.begin(), d.end());
    std::cout<<ans<<'\n';
    return 0;
}