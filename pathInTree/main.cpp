#include <iostream>
#include <vector>
#include "binaryTree.h"

using namespace std;

void FindPath(
        BinaryTreeNode *pRoot,
        int expectedSum,
        std::vector<int> &path,
        int &currentSum) {
    currentSum += pRoot->m_value;
    path.push_back(pRoot->m_value);
    bool isLeaf = pRoot->m_pLeft == nullptr && pRoot->m_pRight == nullptr;
    if (currentSum == expectedSum && isLeaf) {
        printf("A path is found: ");
        auto iter = path.begin();
        for(; iter != path.end(); ++ iter)
            printf("%d\t", *iter);
        printf("\n");
    }
    if (pRoot->m_pLeft != nullptr) {
        FindPath(pRoot->m_pLeft, expectedSum, path, currentSum);
    }
    if (pRoot->m_pRight != nullptr) {
        FindPath(pRoot->m_pRight, expectedSum, path, currentSum);
    }
    currentSum -= pRoot->m_value;
    path.pop_back();
}

void FindPath(BinaryTreeNode* pRoot, int expectedSum){
    if (pRoot == nullptr) {
        return;
    }
    vector<int> path;
    int currentSum = 0;
    FindPath(pRoot, expectedSum, path, currentSum);
}
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}