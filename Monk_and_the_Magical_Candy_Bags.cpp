#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n, k;
    cin>>n>>k;
    multiset<long long> a;
    for(int i = 0; i < n; i++)
    {
      long long candy;
      cin>>candy;
      a.insert(candy);
    }
    long long total_candy = 0;
    
    for(long long i = 0; i < k; i++)
    {
      auto candy_it = --a.end();
      long long candy = (*candy_it);
      total_candy += candy;
      a.erase(candy_it);
      a.insert(candy/2);
    }
    cout<<total_candy<<endl;
  }
}