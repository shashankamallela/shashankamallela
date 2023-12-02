#include<iostream>
using namespace std;
int main()
{
  int i,n,f=1;
  cout<<"enter the number\n";
  cin>>n;
  for(i=1;i<=n;i++)
    f=f*i;
  cout<<"factorial is"<<f;
  return 0;
}
