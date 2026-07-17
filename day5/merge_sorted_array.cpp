#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& nums1, vector<int>& nums2) {

    vector<int> result;
    int i = 0, j = 0;


    while(i < nums1.size() && j < nums2.size()){
        
        if (nums1[i] <= nums2[j]) {
            result.push_back(nums1[i]);
            i++;}
        else {
            result.push_back(nums2[j]);
            j++;
        }
    }

    while (i < nums1.size()) {
        result.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size()) {
        result.push_back(nums2[j]);
        j++;
    }

    return result;
    
}

int main() {
    vector<int> nums1 = {};
    vector<int> nums2={1};
    vector<int> merged = merge(nums1, nums2);

    for (int x : merged) {
        cout << x << " ";
    }

    return 0;
}