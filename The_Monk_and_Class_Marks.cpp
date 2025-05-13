#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<int, multiset<string> > marks;
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    int mark;
    string name;
    cin>>name>>mark;
    marks[mark].insert(name);
  }

  auto curr_it = --marks.end();
  while(true)
  {
    auto &students = (*curr_it).second;
    int mark = (*curr_it).first;
    for(auto &student: students)
    {
      cout<<student<<" "<<mark<<endl;
    }
    if(curr_it == marks.begin())
    {
      break;
    }
    curr_it--;
  }
}