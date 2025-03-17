#include<iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int testCase;
    int a,b;
    std::cin>>testCase;
    for(int i=0; i<testCase; i++) {
        std::cin>>a>>b;
        std::cout<<"Case #"<<i+1<<": "<<a<<" + " <<b<<" = "<<a+b<<'\n';
    }

}