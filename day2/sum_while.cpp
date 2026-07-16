#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    int i = 1;

    cout<<"请输入n:";
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i++;
    }

    cout<<sum;
    return 0;

}