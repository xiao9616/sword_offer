#include <iostream>
// 面试题39：数组中出现次数超过一半的数字
// 题目：数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例
// 如输入一个长度为9的数组{1, 2, 3, 2, 2, 2, 5, 4, 2}。由于数字2在数组中
// 出现了5次，超过数组长度的一半，因此输出2。
int MoreThanHalfNum_Solution1(int* numbers, int length){
    if (numbers == nullptr || length <= 0) {
        return 0;
    }
    int result = numbers[0];
    int times=1;
    for (int i = 1; i < length; ++i) {
        if (times == 0) {
            result = numbers[i];
            times = 1;
        } else if (numbers[i] == result) {
            times++;
        }else{
            times--;
        }
    }
    return result;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}