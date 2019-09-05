//
// Created by 560204 on 19-6-11.
//

#include <cstdio>
#include "complexList.h"

ComplexListNode *CreateNode(int value) {
    ComplexListNode *pNode = new ComplexListNode();
    pNode->m_value = value;
    pNode->m_pNext = nullptr;
    pNode->m_pSibling = nullptr;
    return pNode;
}

void buildNodes(ComplexListNode *pNode, ComplexListNode *pNext, ComplexListNode *pSibling) {
    if (pNode != nullptr) {
        pNode->m_pNext = pNext;
        pNode->m_pSibling = pSibling;
    }
}

void printList(ComplexListNode *pHead) {
    ComplexListNode *pNode = pHead;
    while (pNode != nullptr) {
        printf("The value of this node is: %d.\n", pNode->m_value);

        if(pNode->m_pSibling != nullptr)
            printf("The value of its sibling is: %d.\n", pNode->m_pSibling->m_value);
        else
            printf("This node does not have a sibling.\n");

        printf("\n");

        pNode = pNode->m_pNext;
    }
}
