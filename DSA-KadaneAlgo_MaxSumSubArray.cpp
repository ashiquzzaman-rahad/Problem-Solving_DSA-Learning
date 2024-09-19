#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,-6,4,5};
    int currentSum = 0, maxSum = INT_MIN;
    for(int val: nums){
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    } 
    cout<<maxSum<<endl;
}  