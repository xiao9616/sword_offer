#include <iostream>
#include "List.h"

using namespace std;
// 面试题25：合并两个排序的链表
// 题目：输入两个递增排序的链表，合并这两个链表并使新链表中的结点仍然是按
// 照递增排序的。例如输入图3.11中的链表1和链表2，则合并之后的升序链表如链
// 表3所示。
ListNode* Merge(ListNode* pHead1, ListNode* pHead2){
    if (pHead1 == nullptr) {
        return pHead2;
    }
    if (pHead2 == nullptr) {
        return pHead1;
    }
    ListNode *mergedHead = nullptr;
    if (pHead1->m_value < pHead2->m_value) {
        mergedHead = pHead1;
        mergedHead->m_pNext = Merge(pHead1->m_pNext, pHead2);
    }
    if (pHead1->m_value > pHead2->m_value) {
        mergedHead = pHead2;
        mergedHead->m_pNext = Merge(pHead1, pHead2->m_pNext);
    }
    return mergedHead;
}

int main() {
    return 0;
}