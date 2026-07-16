// Day2(7.14): 斐波那契数列数组优化版，用vector避免递归重复计算，修复数组越界问题
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"输入n:";
    cin>>n;
    vector<int> fib(n);
    if (n >= 1) {
    fib[0] = 1;
    }
    if (n >= 2) {
    fib[1] = 1;
    }
    for (int i = 2; i < n; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    }  
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;
     return 0;  
}