//
// Created by 560204 on 19-6-11.
//

#ifndef COPYCOMPLEXLIST_COMPLEXLIST_H
#define COPYCOMPLEXLIST_COMPLEXLIST_H

struct ComplexListNode{
    int m_value;
    ComplexListNode *m_pNext;
    ComplexListNode *m_pSibling;
};

ComplexListNode *CreateNode(int value);

void buildNodes(ComplexListNode *pNode, ComplexListNode *pNext, ComplexListNode *pSibling);

void printList(ComplexListNode *pHead);

#endif //COPYCOMPLEXLIST_COMPLEXLIST_H
