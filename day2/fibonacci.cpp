#include<iostream>
using namespace std;

int f(int i){
    if( i == 1)
        return 1;
    else if(i == 2){
        return 1;
    }
    else{
        return f(i-1)+f(i-2);
    }
}
int main(){
    int n;
    cout<<"输入n："<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<f(i)<<" ";
    }
    return 0;
}