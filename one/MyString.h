//
// Created by 轩 on 2019-03-07.
//

#ifndef ONE_MYSTRING_H
#define ONE_MYSTRING_H


class MyString {
private:
    char *m_data;
public:
    virtual ~MyString();

    MyString(char *m_data);

    MyString(const MyString &string);

    MyString &operator=(const MyString &string);
};



#endif //ONE_MYSTRING_H
