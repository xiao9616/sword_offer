#include <iostream>
#include "List.h"

using namespace std;
// 面试题24：反转链表
// 题目：定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的
// 头结点。
ListNode* ReverseList(ListNode* pHead){
    ListNode *pNodeReverseHead = nullptr;
    ListNode *pNode = pHead;
    ListNode *pPrev = nullptr;
    while (pNode != nullptr) {
        ListNode *pNext = pNode->m_pNext;
        if (pNext == nullptr) {
            pNodeReverseHead = pNode;
        }
        pNode->m_pNext = pPrev;
        pPrev = pNode;
        pNode = pNext;
    }
    return pNodeReverseHead;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}