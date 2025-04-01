#include<iostream>
#include<string>
#include<algorithm>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin>>s;
    for(int i='a'; i<='z'; i++) {
        std::cout<<std::count(s.begin(),s.end(),i) <<' ';
    }
    return 0;
}