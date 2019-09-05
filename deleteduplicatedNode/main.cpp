#include <iostream>
#include "List.h"

using namespace std;
// 面试题18（二）：删除链表中重复的结点
// 题目：在一个排序的链表中，如何删除重复的结点？例如，在图3.4（a）中重复
// 结点被删除之后，链表如图3.4（b）所示。


void DeleteDuplication(ListNode** pHead){
    if (pHead == nullptr || *pHead == nullptr) {
        return;
    }
    ListNode *pPreNode = nullptr;
    ListNode *pNode = *pHead;
    while (pNode != nullptr) {
        ListNode *pNext = pNode->m_pNext;
        bool needDelete = false;
        if (pNext != nullptr && pNext->m_value == pNode->m_value) {
            needDelete = true;
        }
        if (!needDelete) {
            pPreNode = pNode;
            pNode = pNode->m_pNext;
        }
        else {
            int value = pNode->m_value;
            ListNode *pToBeDel = pNode;
            while (pToBeDel != nullptr && pToBeDel->m_value == value) {
                pNext = pToBeDel->m_pNext;
                delete pToBeDel;
                pToBeDel = nullptr;
                pToBeDel = pNext;
            }
            if (pPreNode == nullptr) {
                *pHead = pNext;
            }else{
                pPreNode->m_pNext = pNext;
            }
            pNode = pNext;
        }
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}