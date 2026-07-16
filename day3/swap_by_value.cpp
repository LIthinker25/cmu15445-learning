#include<iostream>
using namespace std;

void swapvalue(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 100;
    int y = 10;
    swapvalue(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}