#include<iostream>
using namespace std;
int main()
{
  int n,i,s,j;
  cout<<"enter the number\n";
  cin>>n;
  for(i=0;i<=n;i++)
  {
    for(s=0;s<n-i;s++)
    {
      cout<<"";
    }
    for(j=0;j<i;j++)
    {
      cout<<i;
    }
    cout<<"\n";
  }
  return 0;
    
}
