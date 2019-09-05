#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    char *str = "nihao";
    MyString myString(str);
    MyString myString1(str);
    myString1 = myString;
    return 0;
}