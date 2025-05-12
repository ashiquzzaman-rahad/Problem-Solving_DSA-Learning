#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n, m;
    cin>>n>>m;
    unordered_set<long long> a;
    for(long long i = 0; i < n; i++)
    {
      long long candy;
      cin>>candy;
      if(a.find(candy) == a.end())
      {
        a.insert(candy);
      }
    }
    int students = a.size();
    for(long i = 0; i < m; i++)
    {
      long long candy;
      cin>>candy;
      a.insert(candy);
      if(students == a.size())
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
        students++;
      }
      
    }
  }
}