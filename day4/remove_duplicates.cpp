// Day4(7.16): 有序数组原地去重，双指针同向移动实现
#include<iostream>
#include<vector>
using namespace std;

vector<int> removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0) { 
        return nums;
    }
    
    int slow = 0;
    
    for (int fast = 1; fast < nums.size(); fast++) {
        if (nums[fast] != nums[slow]) {
            slow++;
            nums[slow] = nums[fast];
        }
    }
    nums.resize(slow + 1);
    
    return nums;
}

int main() {
    vector<int> nums = {1,1,1,1};
    vector<int> result = removeDuplicates(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
   

