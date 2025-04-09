#include<iostream>
const int MAX = 1000000;
bool check[MAX+1];
int prime[MAX];
int pn;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    check[0] = check[1] = true;
    for (int i=2; i*i<=MAX; i++) {
        if (check[i] == false) {
            prime[pn++] = i;
            for (int j=i+i; j<=MAX; j+=i) {
                 //i의 배수를 지운다.
                check[j] = true;
            }
        }
    }
    while(true) {
        int n;
        std::cin>>n;
        if(n == 0) {
            break;
        }
        for(int i = 1; i < pn; i++) {
            if(check[n - prime[i]] == false) {
                std::cout<< n << " = " << prime[i] << " + " <<  n - prime[i] << '\n';
                break; 
            }
        }
    }
    return 0;
}