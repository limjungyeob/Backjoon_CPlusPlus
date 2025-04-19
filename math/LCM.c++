#include<iostream>

int gcd(int a, int b) {
    if(b==0) {
        return a;
    } else {
        return gcd(b,a%b);
    }
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--) {
        int a,b;
        std::cin>>a>>b;
        int gcd_answer = gcd(a,b);
        int lcm_answer = gcd_answer * (a/gcd_answer) * (b/gcd_answer);
        std::cout<<lcm_answer << '\n';
    }

}
