//
// Created by 560204 on 19-6-1.
//

#ifndef PRINTREVERSELIST_LIST_H
#define PRINTREVERSELIST_LIST_H

struct ListNode{
    int m_value;
    ListNode *m_pNext;
};

void printListNode(ListNode *pNode);
void connectListNode(ListNode *pCurrent, ListNode *pNext);
ListNode *createListNode(int value);
void DestroyList(ListNode *pHead);

#endif //PRINTREVERSELIST_LIST_H
