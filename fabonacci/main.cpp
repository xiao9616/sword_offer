#include <iostream>
#include <assert.h>
using namespace std;
long long Fibonacci_Solution1(unsigned int n){
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return Fibonacci_Solution1(n - 1) + Fibonacci_Solution1(n - 2);
}

long long Fibonacci_Solution2(unsigned int n){
    int result[2] = {0, 1};
    if (n < 2) {
        return result[n];
    }
    long long fibMax = 1;
    long long fibMin = 0;
    long long fibN = 0;
    for (int i = 2; i <= n; ++i) {
        fibN = fibMax + fibMin;
        fibMin = fibMax;
        fibMax = fibN;
    }
    return fibN;
}

struct Matrix2By2{
    long long m_00;
    long long m_01;
    long long m_10;
    long long m_11;

    Matrix2By2(long long int m_00=0, long long int m_01=0, long long int m_10=0, long long int m_11=0) : m_00(m_00), m_01(m_01),
                                                                                                 m_10(m_10), m_11(m_11) {}
};

Matrix2By2 MatrixMultiply(
        const Matrix2By2 &matrix1,

        const Matrix2By2 &matrix2
){
    return Matrix2By2(
            matrix1.m_00 * matrix2.m_00 + matrix1.m_01 * matrix2.m_10,
            matrix1.m_00 * matrix2.m_01 + matrix1.m_01 * matrix2.m_11,
            matrix1.m_10 * matrix2.m_00 + matrix1.m_11 * matrix2.m_10,
            matrix1.m_10 * matrix2.m_01 + matrix1.m_11 * matrix2.m_11);
}

Matrix2By2 MatrixPower(unsigned int n){
    assert(n > 0);
    Matrix2By2 matrix;
    if (n == 1) {
        matrix = Matrix2By2(1, 1, 1, 0);
    } else if (n % 2 == 0) {
        matrix = MatrixPower(n / 2);
        matrix = MatrixMultiply(matrix, matrix);
    } else if (n % 2 == 1) {
        matrix = MatrixPower((n - 1) / 2);
        matrix = MatrixMultiply(matrix, matrix);
        matrix = MatrixMultiply(matrix, Matrix2By2(1, 1, 1, 0));
    }
    return matrix;
}

long long Fibonacci_Solution3(unsigned int n){
    int result[2] = {0, 1};
    if (n < 2) {
        return result[n];
    }
    Matrix2By2 PowerN = MatrixPower(n - 1);
    return PowerN.m_00;
}

int main() {
    cout << Fibonacci_Solution1(10) << endl;
    cout << Fibonacci_Solution2(10) << endl;
    cout << Fibonacci_Solution3(10) << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}