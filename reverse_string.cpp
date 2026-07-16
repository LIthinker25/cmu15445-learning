#include<iostream>
using namespace std;


string reverseString(string s){
    
    int n = s.length();
    for(int i = 0;i < n/2;i++){
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    };
    return s;
}
int main(){

    string s;
    cout<<"请输入一个字符串： ";
    cin>>s;
    cout<<"反转后的字符串为:"<<reverseString(s)<<endl;
    return 0;
}