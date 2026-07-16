// Day1(7.13): 四则运算练习，cin读取两个数字并输出加减乘除结果
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
     

    cout<<"输入第一个数字";
    cin>>num1;

    cout<<"2";
    cin>>num2;

    cout << "加法结果: " << num1 + num2 << endl;
    cout << "减法结果: " << num1 - num2 << endl;
    cout << "乘法结果: " << num1 * num2 << endl;
    cout << "除法结果: " << num1 / num2 << endl;
    
    return 0;
}