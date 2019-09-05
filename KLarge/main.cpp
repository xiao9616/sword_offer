#include <iostream>
// 面试题40：最小的k个数
// 题目：输入n个整数，找出其中最小的k个数。例如输入4、5、1、6、2、7、3、8
// 这8个数字，则最小的4个数字是1、2、3、4。
#include <set>
#include <vector>
#include <functional>

using namespace std;
typedef multiset<int ,greater<int>> intSet;
void GetLeastNumbers_Solution2(const vector<int>& data, intSet& leastNumbers, int k){
    leastNumbers.clear();
    if (k < 1 || data.size() < k) {
        return;
    }
    auto it = data.begin();
    for (; it != data.end(); it++) {
        if (leastNumbers.size() < k) {
            leastNumbers.insert(*it);
        } else{
            auto itheap = leastNumbers.begin();
            if ((*leastNumbers.begin()) > *it) {
                leastNumbers.erase(itheap);
                leastNumbers.insert(*it);
            }
        }
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}