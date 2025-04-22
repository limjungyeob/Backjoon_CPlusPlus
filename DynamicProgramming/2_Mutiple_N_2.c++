#include <cstdio>
#include <iostream>
int d[1001];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    d[0]=1;
    d[1]=1;
    int n;
    std::cin>>n;
    for(int i=2; i<= n; i++)
    {
        d[i]=d[i-1]+d[i-2]+d[i-2];
        d[i] %= 10007;
    }
    std::cout<<d[n]<<'\n';
    return 0;

}