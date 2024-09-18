#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,34,53, 32, 4};

    int search = 99;
    for(int num: nums){
        if(num == search){
            cout<<"Found!"<<endl;
            return 0;
        }
    }
    cout<<"Not Found!"<<endl;
    return 0;
}