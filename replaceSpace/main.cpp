#include <iostream>
using namespace std;
// 面试题5：替换空格
// 题目：请实现一个函数，把字符串中的每个空格替换成"%20"。例如输入“We are happy.”，
// 则输出“We%20are%20happy.”。
void ReplaceBlank(char *str, int length) {
    if (str == nullptr && length <= 0) {
        return;
    }
    int originLength = 0, numberBlank = 0, i = 0;
    while (str[i] != '\0') {
        ++originLength;
        if (str[i] == ' ') {
            ++numberBlank;
        }
        ++i;
    }
    int newLength = originLength + 2 * numberBlank;
    if (newLength > length) {
        return;
    }
    int indexOfOrigin = originLength;
    int indexOfNew = newLength;
    while (indexOfOrigin >= 0 && indexOfNew > indexOfOrigin) {
        if (str[indexOfOrigin] == ' ') {
            str[indexOfNew--] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        }else{
            str[indexOfNew--] = str[indexOfOrigin];
        }
        --indexOfOrigin;
    }

}
int main() {
    const int length = 100;
    char str[length] = "hello world ";
    ReplaceBlank(str, length);
    cout<<str<<endl;
    return 0;
}