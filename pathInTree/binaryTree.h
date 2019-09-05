//
// Created by 560204 on 19-6-1.
//

#ifndef CONSTRUCTBINARYTREE_BINARYTREE_H
#define CONSTRUCTBINARYTREE_BINARYTREE_H


struct BinaryTreeNode{
    int m_value;
    BinaryTreeNode *m_pLeft;
    BinaryTreeNode *m_pRight;
};


BinaryTreeNode *createBinaryTreeNode(int value);
void connectTreeNodes(BinaryTreeNode *pParent, BinaryTreeNode *pLeft, BinaryTreeNode *pRight);
void printTreeNode(const BinaryTreeNode *pNode);
void printTree(const BinaryTreeNode* pRoot);
void destoryTree(BinaryTreeNode *pRoot);

#endif //CONSTRUCTBINARYTREE_BINARYTREE_H
