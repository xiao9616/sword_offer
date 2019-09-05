//
// Created by 560204 on 19-6-10.
//

#include "StackMin.h"


template<typename T>
T &StackMin<T>::top() {
    return m_data.top();
}

template<typename T>
const T &StackMin<T>::top() const {
    return m_data.top();
}

template<typename T>
void StackMin<T>::push(const T &value) {
    m_data.push(value);
    if (m_min.size() == 0 || value < m_min.top()) {
        m_min.push(value);
    } else {
        m_min.push(m_min.pop());
    }
}

template<typename T>
void StackMin<T>::pop() {
    assert(m_data.size() > 0 && m_min.size() > 0);
    m_data.pop();
    m_min.pop();
}

template<typename T>
const T &StackMin<T>::min() const {
    return m_min.top();
}

template<typename T>
bool StackMin<T>::empty() const {
    return m_data.empty();
}

template<typename T>
size_t StackMin<T>::size() const {
    return m_data.size();
}

template<typename T>
StackMin<T>::StackMin() {}

template<typename T>
StackMin<T>::~StackMin() {

}
