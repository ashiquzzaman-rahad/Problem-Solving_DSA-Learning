#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int t, n, val, sum = 0, count1 = 0, count2 = 0;
    cin>>t;
    for(int x = 0; x < t; x++){
        a.clear();
        sum = 0;
        count1 = 0;
        count2 = 0;
        cin>>n;

        for(int i = 0; i < n; i++){
            cin>>val;
            a.push_back(val);
            sum += val;
        }
        // cout<<"sum = "<<sum<<endl;

        for(int i: a){
            if(i == 1){
                count1++;
            }else{
                count2++;
            }
        }
        // cout<<"count 1 = "<<count1<<" count 2 = "<<count2<<endl;

        
        if(sum % 2 != 0){
            cout<<"NO\n";
            continue;
        }
        else{
            int half = sum / 2;
            if(half % 2 == 0 || (half % 2 == 1 && count1 != 0)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
        
        
    }
    return 0;
}