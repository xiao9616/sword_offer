//
// Created by 轩 on 2019-03-07.
//

#include <cstdio>
#include "single1.h"

single1::single1() {}

single1 *single1::getInstance() {
    if (instance == nullptr) {
        instance = new single1();
    }
    return instance;
}

single1 *single1::instance = NULL;

void single1::show() {
    cout<<"single"<<endl;
}
