#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0;i< n; i++){
        for(int j = i + 1; j < n; j++){
            if(target==nums[i] +nums[j]){
                return {i,j};
            }
            }

        }
    return {};
    }

int main(){
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int>result = twoSum(nums,target);

    if(result.empty()){
        cout<<"没有找到"<<endl;
    }else{
        cout << "{" << result[0] << ", " << result[1] << "}"<< endl;
    }
    return 0;
}