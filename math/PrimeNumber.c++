#include<iostream>
//P1978
// https://www.acmecontest.org/problem/1978
bool isPrimeNumber(int num) {
    if(num<2) {
        return false;
    }
    for(int i=2; i*i<=num; i++) {
        if(num % i ==0) {
            return false;
        }
    }
    return true;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int cnt =0;
    int n=0;
    std::cin>>n;
    for(int i=0; i<n; i++) {
        int num;
        std::cin>>num;
        if(isPrimeNumber(num)) {
            cnt++;
        }
    }
    std::cout<<cnt<<'\n';
}