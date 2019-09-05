//
// Created by 560204 on 19-6-10.
//

#ifndef MINSTACK_STACKMIN_H
#define MINSTACK_STACKMIN_H

#include <stack>
#include <assert.h>

// 面试题30：包含min函数的栈
// 题目：定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的min
// 函数。在该栈中，调用min、push及pop的时间复杂度都是O(1)。
using namespace std;
template <typename  T>
class StackMin {
public:
    virtual ~StackMin();

    StackMin();

    T &top();

    const T& top() const;

    void push(const T &value);

    void pop();

    const T &min() const;

    bool empty() const;

    virtual ~StackMin();

    StackMin();

    size_t size() const;
private:
    stack<T> m_data;
    stack<T> m_min;
};

#endif //MINSTACK_STACKMIN_H
