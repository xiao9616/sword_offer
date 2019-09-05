#include <iostream>
// 面试题37：序列化二叉树
// 题目：请实现两个函数，分别用来序列化和反序列化二叉树。
#include "binaryTree.h"
#include <fstream>
using namespace std;

void Serialize(const BinaryTreeNode* pRoot, ostream& stream){
    if (pRoot == nullptr) {
        stream<<"$,";
        return;
    }
    stream << pRoot->m_value << ',';
    Serialize(pRoot->m_pLeft, stream);
    Serialize(pRoot->m_pRight, stream);
}

void Deserialize(BinaryTreeNode* pRoot, istream& stream){
    int number;
    pRoot = new BinaryTreeNode();
    pRoot->m_value = number;
    pRoot->m_pLeft = nullptr;
    pRoot->m_pRight = nullptr;
    Deserialize(pRoot->m_pLeft, stream);
    Deserialize(pRoot->m_pRight, stream);

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}