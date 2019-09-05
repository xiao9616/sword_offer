//
// Created by 560204 on 19-6-3.
//

#include "Cqueue.h"

template<typename T>
Cqueue<T>::Cqueue() {}

template<typename T>
Cqueue<T>::~Cqueue() {

}

template<typename T>
void Cqueue<T>::appendTail(const T &node) {
    stack1.push(node);
}

template<typename T>
T Cqueue<T>::deleteHead() {
    if(stack2.size()<=0){
        while (stack1.size() > 0) {
            T &data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }

    if (stack2.empty()) {
        throw "queue is empty";
    }

    T head = stack2.top();
    stack2.pop();
    return head;
}
