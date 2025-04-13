#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int G[n][n], p[2*n - 1];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin>>G[i][j];
        p[i+j] = G[i][j];
      }
    } 
    int sizeP = 2*n;
    int sum = 0, total = (sizeP * (sizeP+1)) / 2, firstNum = 0;
    for(int i = 0; i < 2*n - 1; i++){
      sum += p[i];
    }
    firstNum = total - sum;
    cout<<firstNum<<" ";
    for(int i = 0; i < sizeP - 1; i++){
      cout<<p[i]<<" ";
    }
    cout<<endl;
  }
}