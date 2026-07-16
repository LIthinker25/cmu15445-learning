// Day2(7.14): 质数判断，修复n=1边界问题，优化为i*i<=n避免浮点误差，加入break提升效率
#include<iostream>
using namespace std;

int main(){
    int i = 2;
    int n = 0;
    int ISprime = 1;
    cout<<"输入n:"<<endl;
    cin>>n;
    if(n==1){
        ISprime = 0;
    }
    while(i*i<=n){
        if(n % i == 0){
            ISprime = 0;
            break;
        }
        i = i + 1;
    }

    if(ISprime){
        cout<<"是质数"<<endl;
    }
    else{
        cout<<"不是质数"<<endl;
    }
   
    return 0;
}