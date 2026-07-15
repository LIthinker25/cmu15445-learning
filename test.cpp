#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 100;  // 只修改了函数内部的局部拷贝
    cout << "函数内部, x = " << x << endl;
}

int main() {
    int a = 5;
    modifyValue(a);
    cout << "函数外部, a = " << a << endl;  // a依然是5！
    return 0;
}