#include<iostream>
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
                //i의 배수를 지운다.
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