#include<iostream>
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