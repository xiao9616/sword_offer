#include <iostream>
#include "Cqueue.h"

using namespace std;

int main() {
    Cqueue<char> queue;
    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');
    auto a=queue.deleteHead();
    auto b = queue.deleteHead();
    auto c = queue.deleteHead();
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}