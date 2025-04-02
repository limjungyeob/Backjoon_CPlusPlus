#include<iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int a,b,c;
    std::cin>> a >> b >> c;
    std::cout << (a+b)%c << '\n';
    std::cout << (a+b)%c << '\n';
    std::cout << (a*b)%c << '\n';
    std::cout << (a*b)%c << '\n';
}