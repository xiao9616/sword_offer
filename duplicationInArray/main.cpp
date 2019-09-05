
// 面试题3（一）：找出数组中重复的数字
// 题目：在一个长度为n的数组里的所有数字都在0到n-1的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，
// 也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。例如，如果输入长度为7的数组{2, 3, 1, 0, 2, 5, 3}，
// 那么对应的输出是重复的数字2或者3。

// 面试题3（二）：不修改数组找出重复的数字
// 题目：在一个长度为n+1的数组里的所有数字都在1到n的范围内，所以数组中至
// 少有一个数字是重复的。请找出数组中任意一个重复的数字，但不能修改输入的
// 数组。例如，如果输入长度为8的数组{2, 3, 5, 4, 3, 2, 6, 7}，那么对应的
// 输出是重复的数字2或者3。
#include <iostream>
using namespace std;

int countRange(const int *numbers, int length, int start, int end) {
    if (numbers == nullptr) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < length; ++i) {
        if (numbers[i] >= start && numbers[i] <= end) {
            ++count;
        }
    }
    return count;
}
int getDuplication(const int* numbers, int length)
{
    if (numbers == nullptr || length <= 0) {
        return -1;
    }
    int start = 1;
    int end = length - 1;
    while (end >= start) {
        int middle = ((end - start) >> 1) + start;
        int count = countRange(numbers, length, start, end);
        if (end == start) {
            if (count > 1) {
                return start;
            }
            else{
                break;
            }
        }
        if (count > (middle - start + 1)) {
            end = middle;
        }else{
            start = middle;
        }
    }
    return -1;
}

bool duplicate(int numbers[], int length, int &duplication) {
    if (numbers == nullptr || length <= 0) {
        return false;
    }
    for (int i = 0; i < length; ++i) {
        if (numbers[i] < 0 || numbers[i] > length - 1) {
            return false;
        }
    }
    for (int j = 0; j < length; ++j) {
        while (numbers[j] != j) {
            if (numbers[j] == numbers[numbers[j]]) {
                duplication = numbers[j];
                return true;
            }
            int temp = numbers[j];
            numbers[j] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 5, 3, 4, 1};
    int duplication = 0;
    int length = 6;
    duplicate(nums, length, duplication);
    cout << duplication << endl;
    cout << getDuplication(nums, length);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}