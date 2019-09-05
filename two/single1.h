//
// Created by 轩 on 2019-03-07.
//

#ifndef TWO_SINGLE1_H
#define TWO_SINGLE1_H

#include <iostream>
using namespace std;
class single1 {
private:
    static single1 *instance;
private:
    single1();

public:
    static single1 *getInstance();
    void show();
};



#endif //TWO_SINGLE1_H
