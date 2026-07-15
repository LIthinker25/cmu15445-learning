#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>&a){
   
    int n = a.size();

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
}

int main(){
    vector<int>nums = {5, 2, 8, 1, 9, 3};
    bubbleSort(nums);
    for(int num : nums){
        cout<<num<<" ";
    }
    return 0;

}