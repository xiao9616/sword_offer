#include <iostream>
#include <math.h>

using namespace std;
int maxProductAfterCutting_solution1(int length){
    if (length < 2) {
        return 0;
    }
    if (length == 2) {
        return 1;
    }
    if (length == 3) {
        return 2;
    }
    int *product = new int[length + 1];
    product[0] = 0;
    product[1] = 1;
    product[2] = 2;
    product[3] = 3;
    for (int i = 4; i <= length; ++i) {
        int max = 0;
        for (int j = 1; j <= i / 2; ++j) {
            int temp = product[j] * product[i - j];
            if (max < temp) {
                max = temp;
            }
        }
        product[i] = max;
    }
    int max = product[length];
    delete[] product;
    return max;
}

int maxProductAfterCutting_solution2(int length){
    if (length < 2) {
        return 0;
    }
    if (length == 2) {
        return 1;
    }
    if (length == 3) {
        return 2;
    }
    int timeOf3 = length / 3;
    if (length - timeOf3 * 3 == 1) {
        timeOf3--;
        return (int) (pow(3, timeOf3)) * 4;
    }
    else{
        return (int) (pow(3, timeOf3)) * 2;
    }
}

int main() {
    cout << maxProductAfterCutting_solution1(10) << endl;
    cout << maxProductAfterCutting_solution2(10) << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}