#include <iostream>
// 面试题27：二叉树的镜像
// 题目：请完成一个函数，输入一个二叉树，该函数输出它的镜像。
#include <stack>
#include "binaryTree.h"

using namespace std;
void MirrorRecursively(BinaryTreeNode *pNode){
    if (pNode == nullptr || (pNode->m_pLeft == nullptr && pNode->m_pRight == nullptr)) {
        return;
    }
    BinaryTreeNode *pTemp = pNode->m_pLeft;
    pNode->m_pLeft = pNode->m_pRight;
    pNode->m_pRight = pTemp;
    if (pNode->m_pLeft) {
        MirrorRecursively(pNode->m_pLeft);
    }
    if (pNode->m_pRight) {
        MirrorRecursively(pNode->m_pRight);
    }
}

void MirrorIteratively(BinaryTreeNode* pNode){
    if (pNode == nullptr || (pNode->m_pLeft == nullptr && pNode->m_pRight == nullptr)) {
        return;
    }
    stack<BinaryTreeNode *> stackTreeNode;
    stackTreeNode.push(pNode);
    while (stackTreeNode.size() > 0) {
        BinaryTreeNode *pRoot = stackTreeNode.top();
        stackTreeNode.pop();
        BinaryTreeNode *pTemp = pRoot->m_pLeft;
        pRoot->m_pLeft = pRoot->m_pRight;
        pRoot->m_pRight = pTemp;
        if (pRoot->m_pLeft) {
            stackTreeNode.push(pRoot->m_pLeft);
        }
        if (pRoot->m_pRight) {
            stackTreeNode.push(pNode->m_pRight);
        }
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}