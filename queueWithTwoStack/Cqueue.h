//
// Created by 560204 on 19-6-3.
//

#ifndef QUEUEWITHTWOSTACK_CQUEUE_H
#define QUEUEWITHTWOSTACK_CQUEUE_H

#include <stack>

using namespace std;

template <typename T>
class Cqueue {
public:


    Cqueue();

    void appendTail(const T &node);

    T deleteHead();

    virtual ~Cqueue();

private:
    stack<T> stack1;
    stack<T> stack2;
};



#endif //QUEUEWITHTWOSTACK_CQUEUE_H
