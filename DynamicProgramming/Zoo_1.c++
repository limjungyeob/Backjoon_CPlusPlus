#include<iostream>
//https://www.acmicpc.net/problem/1309
//P1309
//Zoo Solution Senconds Version
int d[100001];
int s[100001];

int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin>>n;

    d[0] = 1; // Empty case, solutuion is one
    s[0] = 1; // Sum of empty case

    d[1] = 2; // O,X Two cases
    s[1] = d[0] + d[1]; // Sum of two cases
    for(int i=2; i<=n; i++) {
        d[i] = d[i-1] + 2 * s[i-2]; //with s array , calculate d[i].
        s[i] = s[i-1] + d[i]; //array s update
        d[i] %= 9901;
        s[i] %= 9901;
    }

    std::cout<<s[n]<<'\n';
    return 0;
}
