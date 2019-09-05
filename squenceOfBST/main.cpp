#include <iostream>
#include "binaryTree.h"
#include <cstdio>

using namespace std;
// 面试题33：二叉搜索树的后序遍历序列
// 题目：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
// 如果是则返回true，否则返回false。假设输入的数组的任意两个数字都互不相同。
bool VerifySquenceOfBST(int sequence[], int length){
    if (sequence == nullptr || length <= 0) {
        return false;
    }
    int root = sequence[length - 1];
    int i = 0;
    for (; i < length - 1; ++i) {
        if (sequence[i] > root) {
            break;
        }
    }
    for (int j = i; j < length - 1; ++j) {
        if (sequence[j] < root) {
            break;
        }
    }
    bool left = true;
    bool right = true;
    if (i > 0) {
        left = VerifySquenceOfBST(sequence, i);
    }
    if (i < length - 1) {
        right = VerifySquenceOfBST(sequence + 1, length - 1 - i);
    }
    return (right && left);
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}