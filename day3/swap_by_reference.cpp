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