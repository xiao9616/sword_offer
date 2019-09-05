#include <iostream>
#include "List.h"
// 面试题18（一）：在O(1)时间删除链表结点
// 题目：给定单向链表的头指针和一个结点指针，定义一个函数在O(1)时间删除该
// 结点。
using namespace std;
void DeleteNode(ListNode** pListHead, ListNode* pToBeDeleted){
    if (!pListHead || !pToBeDeleted) {
        return;
    }
    if (pToBeDeleted->m_pNext != nullptr) {
        ListNode *pNext = pToBeDeleted->m_pNext;
        pToBeDeleted->m_value = pNext->m_value;
        pToBeDeleted->m_pNext = pNext->m_pNext;
        delete pNext;
        pNext = nullptr;
    }
    if (*pListHead == pToBeDeleted) {
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
        *pListHead = nullptr;
    }
    else{
        ListNode *pNode = *pListHead;
        while (pNode->m_pNext != pToBeDeleted) {
            pNode = pNode->m_pNext;
        }
        pNode->m_pNext = nullptr;
        delete pToBeDeleted;
        pToBeDeleted = nullptr;
    }

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}