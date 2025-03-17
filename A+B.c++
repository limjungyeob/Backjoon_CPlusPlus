#include<iostream>
#include<string>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string line1,line2;
    std::getline(std::cin,line1);
    std::getline(std::cin,line2);

    int num1 = std::stoi(line1);
    int num2 = std::stoi(line2);

    std::cout<<num1 +num2;

}