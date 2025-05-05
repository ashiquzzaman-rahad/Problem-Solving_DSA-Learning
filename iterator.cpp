#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1,2,3,4,5,6};
  vector<int> ::iterator it = v.begin();
  for(it = v.begin(); it != v.end(); it++)
  {
    cout<<(*(it))<<endl;
  }

  vector <pair<int,int> > v_p = {{1,2}, {2,3}, {3,4}};
  // vector <pair<int,int> > ::iterator itv_p = v_p.begin();
  for(auto itv_p = v_p.begin(); itv_p != v_p.end(); itv_p++)
  {
    cout<<itv_p->first<<" "<<itv_p->second<<endl;
  }

  for(auto &val : v_p)
  {
    val.first++;
    val.second++;
    cout<<val.first<<" "<<val.second<<endl;
  }
  for(auto val : v_p)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
}