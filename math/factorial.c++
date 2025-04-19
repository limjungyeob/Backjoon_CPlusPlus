#include<iostream>
int factorial(int n) {
    if(n==0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin>>n;
    std::cout<<factorial(n) << '\n';

}