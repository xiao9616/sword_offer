#include <iostream>
// 面试题28：对称的二叉树
// 题目：请实现一个函数，用来判断一棵二叉树是不是对称的。如果一棵二叉树和
// 它的镜像一样，那么它是对称的。
#include "binaryTree.h"

using namespace std;

bool isSymmetrical(BinaryTreeNode* pRoot1, BinaryTreeNode* pRoot2){
    if (pRoot1 == nullptr && pRoot2 == nullptr) {
        return true;
    }
    if (pRoot1 == nullptr || pRoot2 == nullptr) {
        return false;
    }
    if (pRoot1->m_value != pRoot2->m_value) {
        return false;
    }
    return isSymmetrical(pRoot1->m_pLeft, pRoot2->m_pRight) && isSymmetrical(pRoot1->m_pRight, pRoot2->m_pLeft);
}
bool isSymmetrical(BinaryTreeNode *pRoot){
    return isSymmetrical(pRoot, pRoot);
}
int main() {
    return 0;
}