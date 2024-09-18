#include<iostream>
using namespace std;

int main(){
    int t, a, b, i, area;
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>a>>b;
        int minNum = min(a,b);
        int maxNum = max(a,b);
        if(minNum * 2 >= maxNum){
            area = (minNum*2) * (minNum*2);
        }
        else{
            area = (maxNum * maxNum);
        }
        cout<<area<<endl;
    }
    return 0;
}

// time: 11min