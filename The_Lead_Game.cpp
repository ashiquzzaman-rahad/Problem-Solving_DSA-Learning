#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int player1, player2, cumulativeP1 = 0, cumulativeP2 = 0, lead = 0, maxLead = 0, win;
  for (int i = 0; i < n; i++)
  {
    cin >> player1;
    cumulativeP1 += player1;
    cin >> player2;
    cumulativeP2 += player2;
    if(cumulativeP1 > cumulativeP2)
    {
      lead = cumulativeP1 - cumulativeP2;
      if(lead > maxLead)
      {
        maxLead = lead;
        win = 1;
      }
    }
    else
    {
      lead = cumulativeP2 - cumulativeP1;
      if(lead > maxLead)
      {
        maxLead = lead;
        win = 2;
      }
    }
  }
  cout << win << " " << maxLead << endl;
}
