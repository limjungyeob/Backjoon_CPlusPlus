#include<iostream>
#include<string>
std::string valid(std::string s) {
    int cnt =0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') {
            cnt +=1;
        } else {
            cnt -=1;
        }
        if(cnt < 0) {
            return "NO";
        }
    }
    if(cnt == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;


    while(t--) {
        std::string s;
        std::cin>>s;
        std::cout <<valid(s) <<'\n';
    }

    return 0;

}