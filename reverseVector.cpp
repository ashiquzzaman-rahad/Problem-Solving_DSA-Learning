#include<bits/stdc++.h>
using namespace std;

void reverseVector(vector<int> &vec)
{
  int start = 0, end = vec.size()-1;
  while(start <= end)
  {
    int temp = vec[start];
    vec[start] = vec[end];
    vec[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  vector<int> vec;
  int num;
  for(int i = 0; i < 5; i++)
  {
    cin>>num;
    vec.push_back(num);
  }
  reverseVector(vec);
  for(int val: vec)
  {
    cout<<val<<" ";
  }
  cout<<endl;
}