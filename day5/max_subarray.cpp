#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    
    int n = nums.size();
    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1;i < n;i++){
        int nextSum = currentSum + nums[i];
        if( nextSum < nums[i] || nextSum < 0){
            currentSum = nums[i];
        }
        else{
            currentSum = nextSum;
        }

        maxSum = max(currentSum,maxSum);
    }

    return maxSum;
}

int main(){

    vector<int> nums= {5,4,-1,7,8};
    cout<<maxSubArray(nums)<<endl;
    return 0;

}