#include <iostream>
// 面试题38：字符串的排列
// 题目：输入一个字符串，打印出该字符串中字符的所有排列。例如输入字符串abc，
// 则打印出由字符a、b、c所能排列出来的所有字符串abc、acb、bac、bca、cab和cba。
using namespace std;

void Permutation(char* pStr, char* pBegin){
    if (*pBegin == '\0') {
        cout << *pStr << endl;
    }
    else{
        for (char *ch = pBegin; *ch != '\0'; ++ch) {
            char temp = *ch;
            *ch = *pBegin;
            *pBegin = temp;
            Permutation(pStr, pBegin + 1);
            temp = *ch;
            *ch = pBegin;
            *pBegin = temp;
        }
    }
}
void Permutation(char* pStr){
    if (pStr == nullptr) {
        return;
    }
    Permutation(pStr, pStr);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}