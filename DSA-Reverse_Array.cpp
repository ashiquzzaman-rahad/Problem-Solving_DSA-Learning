#include <bits/stdc++.h>
#include<vector>
using namespace std;

void reverseArray(vector<int>&nums){
    int start = 0, end = nums.size() - 1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};

    reverseArray(nums);
    
    for(int num: nums){
        cout<<num<<" ";
    }
    return 0;
}