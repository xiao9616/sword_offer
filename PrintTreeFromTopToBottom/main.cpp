#include <iostream>
// 面试题32（一）：不分行从上往下打印二叉树
// 题目：从上往下打印出二叉树的每个结点，同一层的结点按照从左到右的顺序打印。
#include "binaryTree.h"
#include <deque>
#include <stack>

using namespace std;

void PrintFromTopToBottom(BinaryTreeNode* pRoot){
    if (pRoot == nullptr) {
        return;
    }
    deque<BinaryTreeNode *> dequeTreeNode;
    dequeTreeNode.push_back(pRoot);
    while (dequeTreeNode.empty()) {
        BinaryTreeNode *pNode = dequeTreeNode.front();
        dequeTreeNode.pop_front();
        cout << pNode->m_value << endl;
        if (pNode->m_pLeft) {
            dequeTreeNode.push_back(pNode->m_pLeft);
        }
        if (pNode->m_pRight) {
            dequeTreeNode.push_back(pNode->m_pRight);
        }
    }
}

void Print2Line(BinaryTreeNode* pRoot){
    if (pRoot == nullptr) {
        return;
    }
    deque<BinaryTreeNode *> dequeTreeNode;
    dequeTreeNode.push_back(pRoot);
    int nextLevel = 0;
    int toBePrint = 1;
    while (dequeTreeNode.empty()) {
        BinaryTreeNode *pNode = dequeTreeNode.front();
        dequeTreeNode.pop_front();
        cout << pNode->m_value << endl;
        if (pNode->m_pLeft) {
            dequeTreeNode.push_back(pNode->m_pLeft);
            ++nextLevel;
        }
        if (pNode->m_pRight) {
            dequeTreeNode.push_back(pNode->m_pRight);
            ++nextLevel;
        }
        --toBePrint;
        if (toBePrint == 0) {
            cout << endl;
            toBePrint = nextLevel;
            nextLevel = 0;
        }
    }
}
// 面试题32（三）：之字形打印二叉树
// 题目：请实现一个函数按照之字形顺序打印二叉树，即第一行按照从左到右的顺
// 序打印，第二层按照从右到左的顺序打印，第三行再按照从左到右的顺序打印，
// 其他行以此类推。
void PrintZhi(BinaryTreeNode *pRoot) {
    if (pRoot == nullptr) {
        return;
    }
    stack<BinaryTreeNode *> level[2];
    int current=0;
    int next = 1;
    level[current].push(pRoot);
    while (!level[0].empty() || !level[1].empty()) {
        BinaryTreeNode *pNode = level[current].top();
        level[current].pop();
        cout << pNode->m_value << endl;
        if (current == 0) {
            if (pNode->m_pLeft) {
                level[next].push(pNode->m_pLeft);
            }
            if (pNode->m_pRight) {
                level[next].push(pNode->m_pRight);
            }
        }
        else {
            if (pNode->m_pRight) {
                level[next].push(pNode->m_pRight);
            }
            if (pNode->m_pLeft) {
                level[next].push(pNode->m_pLeft);
            }
        }
        if (level[current].empty()) {
            if (current == 0) {
                if (pNode->m_pLeft) {
                    level[next].push(pNode->m_pLeft);
                }
                if (pNode->m_pRight) {
                    level[next].push(pNode->m_pRight);
                }
            }
        }
        if (level[current].empty()) {
            current = 1 - current;
            next = 1 - next;
            cout << endl;
        }
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}