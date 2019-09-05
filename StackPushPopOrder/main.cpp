#include <iostream>
// 面试题31：栈的压入、弹出序列
// 题目：输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是
// 否为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1、2、3、4、
// 5是某栈的压栈序列，序列4、5、3、2、1是该压栈序列对应的一个弹出序列，但
// 4、3、5、1、2就不可能是该压栈序列的弹出序列。
#include <stack>

using namespace std;

bool IsPopOrder(const int* pPush, const int* pPop, int nLength){
    bool bPossible = false;
    if (pPush == nullptr || pPop == nullptr || nLength <= 0) {
        return bPossible;
    }
    const int *pNextPush = pPush;
    const int *pNextpop = pPop;
    stack<int> stackdata;
    while (pNextpop - pPop < nLength) {
        while (stackdata.empty() || stackdata.top() != *pNextpop) {
            if (pNextPush - pPush == nLength) {
                break;
            }
            stackdata.push(*pNextPush);
            ++pNextPush;
        }
        if (stackdata.top() != *pNextpop) {
            break;
        }
        stackdata.pop();
        pNextpop++;
    }
    if (stackdata.empty() && pNextpop - pPop == nLength) {
        bPossible = true;
    }
    return bPossible;














}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}