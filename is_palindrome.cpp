#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int n = s.length();
    for(int i = 0;i < n/2;i++){
        if(s[i] != s[n-i-1] ){
            return false;
        }
       
    }
     
    return true;
}

int main(){
    string s;
    cout<<"请输入字符串S:";
    cin>>s;
    cout<<"是否为回文字符串"<<isPalindrome(s)<<endl;
    return 0;
}