#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a = 100;
  int* ptr = &a;
  int** ptrptr = &ptr;

  cout<<"a = "<<a<<endl;
  cout<<"&a = "<<&a<<endl;
  cout<<"*(&a) = "<<*(&a)<<endl;
  cout<<"ptr = "<<ptr<<endl;
  cout<<"*ptr = "<<*ptr<<endl;
  cout<<"&ptr = "<<&ptr<<endl;
  cout<<"ptrptr = "<<ptrptr<<endl;
  cout<<"*ptrptr = "<<*ptrptr<<endl;
  cout<<"**ptrptr = "<<**ptrptr<<endl;
  cout<<"\n\n";
  int arr[] = {1,2,3,4,5,6};
  cout<<"arr = "<<arr<<endl;
  cout<<"*arr = "<<*arr<<endl;
  cout<<"*(arr+1) = "<<*(arr+1)<<endl;
}