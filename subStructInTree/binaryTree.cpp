//
// Created by 560204 on 19-6-1.
//

#include "binaryTree.h"
#include <iostream>
using namespace std;

BinaryTreeNode *createBinaryTreeNode(int value){
    BinaryTreeNode *pNode = new BinaryTreeNode();
    pNode->m_value = value;
    pNode->m_pLeft = nullptr;
    pNode->m_pRight = nullptr;
}

void connectTreeNodes(BinaryTreeNode *pParent, BinaryTreeNode *pLeft, BinaryTreeNode *pRight){
    if (pParent != nullptr) {
        pParent->m_pLeft = pLeft;
        pParent->m_pRight = pRight;
    }
}

void printTreeNode(const BinaryTreeNode *pNode){
    if (pNode != nullptr) {
        printf("value of this node is: %d\n", pNode->m_value);

        if(pNode->m_pLeft != nullptr)
            printf("value of its left child is: %d.\n", pNode->m_pLeft->m_value);
        else
            printf("left child is nullptr.\n");

        if(pNode->m_pRight != nullptr)
            printf("value of its right child is: %d.\n", pNode->m_pRight->m_value);
        else
            printf("right child is nullptr.\n");
    }
    else{
        printf("this node is nullptr.\n");
    }
    printf("\n");
}

void printTree(const BinaryTreeNode* pRoot){
    printTreeNode(pRoot);
    if (pRoot != nullptr) {
        if (pRoot->m_pLeft != nullptr) {
            printTree(pRoot->m_pLeft);
        }
        if (pRoot->m_pRight != nullptr) {
            printTree(pRoot->m_pRight);
        }
    }
}

void destoryTree(BinaryTreeNode *pRoot){
    if (pRoot != nullptr) {
        BinaryTreeNode *pLeft = pRoot->m_pLeft;
        BinaryTreeNode *pRight = pRoot->m_pRight;
        delete pRoot;
        pRoot = nullptr;
        destoryTree(pLeft);
        destoryTree(pRight);
    }
}