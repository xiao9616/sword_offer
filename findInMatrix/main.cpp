#include <iostream>
using namespace std;
// 面试题4：二维数组中的查找
// 题目：在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按
// 照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个
// 整数，判断数组中是否含有该整数。

bool FindNumber(int* matrix, int rows, int columns, int number){
    bool find = false;
    if (matrix != nullptr && rows > 0 && columns > 0) {
        int i = 0;
        int j = columns - 1;
        while (i < rows && j >= 0) {
            if (matrix[i * columns + j] == number) {
                find = true;
                return find;
            } else if (matrix[i * columns + j] > number) {
                --j;
            }else{
                ++i;
            }
        }

    }
    return find;
}

int main() {
    int matrix[][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
    if(FindNumber((int *)matrix, 4, 4, 20)){
        cout << "find" << endl;
    };
    std::cout << "Hello, World!" << std::endl;
    return 0;
}