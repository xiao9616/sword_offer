//
// Created by 560204 on 19-6-1.
//

#include "List.h"
#include <iostream>
using namespace std;

ListNode *createListNode(int value){
    ListNode *pNode = new ListNode();
    pNode->m_value = value;
    pNode->m_pNext = nullptr;
    return pNode;
}

void connectListNode(ListNode *pCurrent, ListNode *pNext){
    if (pCurrent == nullptr) {
        return;
    }
    pCurrent->m_pNext = pNext;
}

void printListNode(ListNode *pNode){
    if (pNode == nullptr) {
        return;
    }else{
        cout << "the key in node is :" << pNode->m_value << endl;
    }
}

void printList(ListNode *pHead){
    ListNode *pNode = pHead;
    while (pNode != nullptr) {
        cout << pNode->m_value << "->";
        pNode = pNode->m_pNext;
    }
    cout << endl;
    cout<<"list end!"<<endl;
}

void DestroyList(ListNode *pHead){
    ListNode *pNode = pHead;
    while (pNode != nullptr) {
        pHead = pHead->m_pNext;
        delete pNode;
        pNode = pHead;
    }
}