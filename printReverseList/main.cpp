#include <iostream>
#include "List.h"
#include <stack>

using namespace std;

void PrintListReversingly_Iteratively(ListNode* pHead){
    stack<ListNode*> nodes;
    ListNode *pNode = pHead;
    while (pNode != nullptr) {
        nodes.push(pNode);
        pNode = pNode->m_pNext;
    }
    while (!nodes.empty()) {
        pNode = nodes.top();
        printListNode(pNode);
        nodes.pop();
    }
}

void PrintListReversingly_Recursively(ListNode* pHead){
    if (pHead != nullptr) {
        if (pHead->m_pNext != nullptr) {
            PrintListReversingly_Recursively(pHead->m_pNext);
        }
        printListNode(pHead);
    }
}
int main() {
    ListNode* pNode1 = createListNode(1);
    ListNode* pNode2 = createListNode(2);
    ListNode* pNode3 = createListNode(3);
    ListNode* pNode4 = createListNode(4);
    ListNode* pNode5 = createListNode(5);

    connectListNode(pNode1, pNode2);
    connectListNode(pNode2, pNode3);
    connectListNode(pNode3, pNode4);
    connectListNode(pNode4, pNode5);
    PrintListReversingly_Iteratively(pNode1);
    PrintListReversingly_Recursively(pNode1);

    return 0;
}