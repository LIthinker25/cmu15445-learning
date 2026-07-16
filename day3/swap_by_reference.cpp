// Day3(7.15): 引用传递swap实验，验证函数内部交换成功影响外部变量
#include<iostream>
using namespace std;

void swap_by_reference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 100;
    int y = 10;
    swap_by_reference(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}