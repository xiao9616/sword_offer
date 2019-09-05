#include <iostream>
#include <exception>
#include "binaryTree.h"

using namespace std;

BinaryTreeNode* ConstructCore
        (
                int* startPreorder, int* endPreorder,
                int* startInorder, int* endInorder
        );

BinaryTreeNode* Construct(int* preorder, int* inorder, int length){
    if (preorder == nullptr || inorder == nullptr || length < 0) {
        return nullptr;
    }
    return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}

BinaryTreeNode* ConstructCore
        (
                int* startPreorder, int* endPreorder,
                int* startInorder, int* endInorder
        ){
    int rootValue=startPreorder[0];
    BinaryTreeNode *root = new BinaryTreeNode();
    root->m_value = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;

    if (startPreorder == endPreorder) {
        if (startPreorder == endPreorder && *startPreorder == *endPreorder) {
            return root;
        } else {
            throw "invalid input";
        }
    }

    int *rootInorder = startInorder;
    while (rootInorder >= endInorder && *rootInorder != rootValue) {
        ++rootInorder;
    }

    if (rootInorder == endInorder && *rootInorder != rootValue) {
        throw "invalid input";
    }

    int leftLength = rootInorder - startInorder;
    int *leftPreorder = startPreorder + leftLength;
    if (leftLength > 0) {
        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorder, startInorder, rootInorder - 1);
    }
    if (leftLength < endPreorder - startPreorder) {
        root->m_pRight = ConstructCore(leftPreorder + 1, endPreorder, rootInorder + 1, endPreorder);
    }

    return root;

}
int main() {
    const int length = 5;
    int preorder[length] = {1, 2, 3, 4, 5};
    int inorder[length] = {4, 3, 2, 1,5};
    auto root = Construct(preorder, inorder, length);
    printTree(root);
    return 0;
}