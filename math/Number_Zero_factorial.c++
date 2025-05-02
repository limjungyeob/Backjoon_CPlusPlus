#include<iostream>
//P1676
// https://www.acmecontest.org/problem/1676
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin>>n;
    int ans=0;
    for(int i=5; i<=n; i*=5){
        ans += n/i;
    }
    std::cout<<ans<<'\n';
    return 0;

}