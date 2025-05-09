#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a[3],b[3], minA = INT_MAX, minB = INT_MAX, sumA = 0, sumB = 0;
    for(int i = 0; i < 3; i++)
    {
      cin>>a[i];
      sumA += a[i];
      if(a[i] < minA)
      {
        minA = a[i];
      }
    }
    for(int i = 0; i < 3; i++)
    {
      cin>>b[i];
      sumB += b[i];
      if(b[i] < minB)
      {
        minB = b[i];
      }
    }
    int scA = sumA - minA;
    int scB = sumB - minB;
    if(scA > scB)
    {
      cout<<"Alice\n";
    }
    else if(scA < scB)
    {
      cout<<"Bob\n";
    }
    else
    {
      cout<<"Tie\n";
    }
  }
}
