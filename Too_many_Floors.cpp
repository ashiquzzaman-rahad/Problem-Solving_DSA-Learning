#include <bits/stdc++.h>
using namespace std;

int floorNum(int room)
{
  int floor = 0;
  if(room % 10 == 0)
  {
    floor = (room / 10);
  }
  else
  {
    floor = (room / 10) + 1;
  }
  return floor;
}

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y;
    cin>>x>>y;
    int xFloor = floorNum(x), yFloor = floorNum(y);
    cout<<abs(xFloor - yFloor)<<endl;
  }
}
