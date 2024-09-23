#include<iostream>
using namespace std;

int main(){
    int n, sum = 1, i = 2, h = 0;
    cin>>n;
    while(n - sum >= 0){
        n -= sum;
        sum += i;
        i++;  
        h++; 
    }
    cout<<h<<endl;
    return 0;
}