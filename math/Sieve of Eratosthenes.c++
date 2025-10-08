#include<iostream>
//P1929
// https://www.acmicpc.net/problem/1929
const int MAX = 1000000;
bool check[MAX+1];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    check[0] = check[1] = true;
    for (int i=2; i*i<=MAX; i++) {
        if (check[i] == false) {
            for (int j=i+i; j<=MAX; j+=i) {
                //Remove the multiples of i.
                check[j] = true;
            }
        }
    }
    int m,n;
    std::cin>>m>>n;
    for(int i=m; i<=n; i++) {
        if(check[i] == false) {
            std::cout<<i<<'\n';
        }
    }
}