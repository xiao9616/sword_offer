//
// Created by 轩 on 2019-03-07.
//

#include <cstring>
#include "MyString.h"
#include <iostream>

using namespace std;
MyString::MyString(char *m_data) {
    this->m_data = new char[strlen(m_data) + 1];
    strcpy(this->m_data, m_data);
}

//MyString &MyString::operator=(const MyString &string) {
//    if (this == &string) {
//        return *this;
//    }
//    delete [] m_data;
//    m_data = nullptr;
//    m_data = new char[strlen(string.m_data) + 1];
//    strcpy(m_data, string.m_data);
//    return *this;
//}

MyString &MyString::operator=(const MyString &string) {

    if (this != &string) {
        MyString strTemp(string);

        char *temp = strTemp.m_data;
        strTemp.m_data = m_data;
        m_data = temp;
    }
    return *this;
}

MyString::~MyString() {

}

MyString::MyString(const MyString &string) {

}

