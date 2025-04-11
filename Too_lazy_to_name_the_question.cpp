#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  int rem = a % b;
  while(rem != 0){
    a = b, b = rem;
    rem = a % b;
  }
  return b;
}

bool containNum(long int *nums, int l, int x)
{
  int flag = 0;
  for(int i = 0; i < l+1; i++){
    if(nums[i] == x){
      // cout<<"function"<<x<<endl;
      flag = 1;
    }
  }
  if(flag == 0){
    return false;
  }
  else
  {
    return true;
  }
}


int main()
{
  long int a, b, c;
  cin>>a>>b>>c;
  long int nums[c], mulA[c], mulB[c];
  for(int i = 1; i <= c; i++){
    mulA[i-1] = i*a;
    mulB[i-1] = i*b;
  }
  int indA = 0, indB = 0;
  
  for(int i = 0; i < c; i++){
    if(mulA[indA] <= mulB[indB]){
      // cout<<containNum(nums, i, mulA[indA])<<mulA[indA]<<"A"<<endl;
      if(!containNum(nums, i, mulA[indA])){
        // cout<<"Here\n";
        nums[i] = mulA[indA];
      }
      else
      {
        i--;
      }
      indA++;
    }
    else
    {
      // cout<<containNum(nums, i, mulA[indA])<<mulB[indB]<<"B"<<endl;
      if(!containNum(nums, i, mulB[indB])){
        // cout<<"Here\n";
        nums[i] = mulB[indB];
      }
      else{
        i--;
      }
      indB++;
    }
    // cout<<nums[i]<<" ";
  }
  // cout<<endl<<nums[c-1]<<endl;
  int step;
  if(nums[c-1] % a == 0 && nums[c-1] % b != 0)
  {
    step = a;
  }
  else if(nums[c-1] % b == 0 && nums[c-1] % a != 0)
  {
    step = b;
  }
  else
  {
    // cout<<gcd(a, b);
    step = (a*b)/gcd(a,b);
  }
  for(int i = nums[c-1]; i >= 0; i = i - step)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}