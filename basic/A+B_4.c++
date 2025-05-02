#include<iostream>
//P10951
//https://www.acmicpc.net/problem/10951
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int a,b;
    while(std::cin>>a>>b) {
        if(a==0&&b==0) {
            break;
        }
        std::cout<<a+b<<'\n';

    }
    return 0;
}