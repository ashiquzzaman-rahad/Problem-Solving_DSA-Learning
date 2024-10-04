#include<bits/stdc++.h>
#include<vector>
using namespace std;

int minIndex(int arr[], int n){
    int min = arr[0], minIndex = 0;
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int maxIndex(int arr[], int n){
    int max = arr[0], maxIndex = 0;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main(){
    int t, n, k, i = 0;
    int a[30], b[30];
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>n>>k;

        for(int j = 0; j < n; j++){
            cin>>a[j];
        }

        for(int j = 0; j < n; j++){
            cin>>b[j];
        }

        for(int j = 0; j < k; j++){
            int minInd = minIndex(a, n);
            int maxInd = maxIndex(b, n);
            
            if(a[minInd] > b[maxInd]){
                break;
            }  
            swap(a[minInd], b[maxInd]);
        }

        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j];
        }
        cout<<sum<<endl;
        // cout<<accumulate(a.begin(), a.end(), 0)<<endl;
    }
    return 0;
}