#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    cout<<"输入n:"<<endl;
    cin>>n;

    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}