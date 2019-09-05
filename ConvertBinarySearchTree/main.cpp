#include <iostream>
#include "binaryTree.h"
// 面试题36：二叉搜索树与双向链表
// 题目：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求
// 不能创建任何新的结点，只能调整树中结点指针的指向。
using namespace std;

void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode** pLastNodeInList){
    if (pNode == nullptr) {
        return;
    }
    BinaryTreeNode *pCurrent = pNode;
    if (pCurrent->m_pLeft != nullptr) {
        ConvertNode(pCurrent->m_pLeft, pLastNodeInList);
    }
    pCurrent->m_pLeft = *pLastNodeInList;
    if (*pLastNodeInList != nullptr) {
        (*pLastNodeInList)->m_pRight = pCurrent;
    }
    *pLastNodeInList = pCurrent;
    if (pCurrent->m_pRight != nullptr) {
        ConvertNode(pCurrent->m_pRight, pLastNodeInList);
    }
}
BinaryTreeNode* Convert(BinaryTreeNode* pRootOfTree){
    BinaryTreeNode *pLastNodeInList = nullptr;
    ConvertNode(pRootOfTree, &pLastNodeInList);
    BinaryTreeNode *pHeadOfList = pLastNodeInList;
    while (pHeadOfList != nullptr && pHeadOfList->m_pLeft != nullptr) {
        pHeadOfList = pHeadOfList->m_pLeft;
    }
    return pHeadOfList;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}