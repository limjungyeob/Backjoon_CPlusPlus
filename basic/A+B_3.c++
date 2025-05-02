#include<iostream>
//P10950
//https://www.acmicpc.net/problem/10950
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int testCase;
    int a,b;
    std::cin>>testCase;
    while(testCase--) {
        std::cin>>a>>b;
        std::cout<<a+b<<'\n';
    }
}