#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t, n, val;
    double avg = 0, half_avg = 0, total = 0;
    vector<int> a;
    cin>>t;
    for(int x = 0; x < t; x++){
        cin>>n;
        
        for(int i = 0; i < n; i++){
            cin>>val;
            a.push_back(val);
        }

        if(n == 1 or n == 2){
            cout<<-1<<endl;
            a.clear();
            continue;
        }
        total = 0;
        for(int i = 0; i < n; i++){
            total += a[i];
            // cout<<"tot = "<<total<<endl;
        }
        
        avg = (double)total / n;
        // cout<<"avg = "<<avg<<endl;
        half_avg = (double)avg / 2;
        // cout<<"half_avg = "<<half_avg<<endl;
        sort(a.begin(), a.end());

        int half_n = (n / 2);
        // cout<<"a = "<<a[half_n]<<endl;
        if((double)a[half_n] < half_avg){
            cout<<0<<endl;
        }
        else{
            int adding = (int)((a[half_n] * (n*2)) - total) + 1 ;
            cout<<adding<<endl;
        }
        
        a.clear();
        
    }
    return 0;
}    

//not solved