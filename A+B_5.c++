#include<iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int testCase;
    int a,b;
    char comma;
    std::cin>>testCase;
    while(testCase--) {
        std::cin>>a>>comma>>b;
        std::cout<<a+b<<'\n';
    }
}