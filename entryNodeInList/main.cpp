#include <iostream>
#include "List.h"

using namespace std;

// 面试题23：链表中环的入口结点
// 题目：一个链表中包含环，如何找出环的入口结点？例如，在图3.8的链表中，
// 环的入口结点是结点3。
ListNode* MeetingNode(ListNode* pHead){
    if (pHead == nullptr) {
        return nullptr;
    }
    ListNode *pSlow = pHead->m_pNext;
    if (pSlow == nullptr) {
        return nullptr;
    }
    ListNode *pFast = pSlow->m_pNext;
    while (pFast != nullptr && pSlow != nullptr) {
        if (pFast == pSlow) {
            return pFast;
        }
        pSlow = pSlow->m_pNext;
        pFast = pFast->m_pNext;
        if (pFast != nullptr) {
            pFast = pFast->m_pNext;
        }
    }
    return nullptr;
}

ListNode* EntryNodeOfLoop(ListNode* pHead){
    ListNode* meetingNode = MeetingNode(pHead);
    if (meetingNode == nullptr) {
        return nullptr;
    }
    int nodeInLoop = 1;
    ListNode *pNode1 = meetingNode;
    while (pNode1->m_pNext != meetingNode) {
        pNode1 = pNode1->m_pNext;
        ++nodeInLoop;
    }
    pNode1 = pHead;
    for (int i = 0; i < nodeInLoop; ++i) {
        pNode1 = pNode1->m_pNext;
    }
    ListNode *pNode2 = pHead;
    while (pNode1 != pNode2) {
        pNode1 = pNode1->m_pNext;
        pNode2 = pNode2->m_pNext;
    }
    return pNode1;
}
int main() {
    return 0;
}