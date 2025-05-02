#include<iostream>
#include<iomanip>
#include<stack>
#include<string>
//P1935
// https://www.acmecontest.org/problem/1935
int operand[26];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::stack<double> stack;
    int n;
    std::cin >> n;
    std::string postfix;
    std::cin>>postfix;
    for(int i=0; i<n; i++) {
        std::cin>>operand[i];
    }
    for(char ch : postfix) {
        //?”¼?—°?‚°?ž(?•„?Š¤?‚¤ ê°’ìœ¼ë¡? ?œ ë¬¸ìž?—´ ????ž¥?ž¥)
        if(ch >= 'A' && ch <= 'z') {
            stack.push((double)operand[ch - 'A']);
        } else {
            double op2 = stack.top();
            stack.pop();
            double op1 = stack.top();
            stack.pop();
            if(ch == '+') {
                stack.push(op1+op2);
            } else if (ch == '-') {
                stack.push(op1-op2);
            } else if (ch == '*') {
                stack.push(op1*op2);
            } else if (ch == '/') {
                stack.push(op1/op2);
            }
        }
    }
    //?†Œ?ˆ«?  2?žë¦? ê¹Œì?? ì¶œë ¥? ¥
    std::cout<<std::fixed <<std::setprecision(2) <<stack.top() <<'\n';

}