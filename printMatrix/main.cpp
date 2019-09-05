#include <iostream>
// 面试题29：顺时针打印矩阵
// 题目：输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字。
using namespace std;
void printNumber(int number)
{
    printf("%d\t", number);
}
void PrintMatrixInCircle(int** numbers, int columns, int rows, int start){
    int endX = columns - 1 - start;
    int endY = rows - 1 - start;
    for (int i = start; i <= endX; ++i) {
        printNumber(numbers[start][i]);
    }
    if (start < endY) {
        for (int i = start + 1; i <= endY; ++i) {
            printNumber(numbers[i][endX]);
        }
    }
    if (start < endX && start < endY) {
        for (int i = endX - 1; i >= start; --i) {
            printNumber(numbers[endY][i]);
        }
    }
    if (start < endX && start < endY - 1) {
        for (int i = endX - 1; i >= start+1; --i) {
            printNumber(numbers[i][start]);
        }
    }
}
void PrintMatrixClockwisely(int** numbers, int columns, int rows){
    if (numbers == nullptr || columns <= 0 || rows <= 0) {
        return;
    }
    int start = 0;
    while (columns > 2 * start && rows > 2 * start) {
        PrintMatrixInCircle(numbers, columns, rows, start);
        ++start;
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}