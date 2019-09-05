#include <iostream>
// 面试题16：数值的整数次方
// 题目：实现函数double Power(double base, int exponent)，求base的exponent
// 次方。不得使用库函数，同时不需要考虑大数问题。

bool equal(double num1, double num2)
{
    return (num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001);
}

double PowerWithUnsignedExponent(double base, unsigned int exponent){
    if (exponent == 1) {
        return base;
    }
    double result = PowerWithUnsignedExponent(base, exponent >> 1);
    result *= result;
    if (exponent & 1 == 1) {
        result *= base;
    }
    return result;
}

double Power(double base, int exponent){
    if (equal(base, 0.0)) {
        return 0.0;
    }
    if (exponent == 0) {
        return 1.0;
    }
    unsigned int absExponent = (unsigned int) (exponent);
    if (exponent < 0) {
        absExponent = (unsigned int) (-exponent);
    }
    double result = PowerWithUnsignedExponent(base, absExponent);
    if (exponent < 0) {
        result = 1.0 / result;
    }
    return result;
}
using namespace std;
int main() {
    cout << Power(2.0, 10)<<endl;
    return 0;
}