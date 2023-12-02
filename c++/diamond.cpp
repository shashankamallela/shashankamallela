#include <iostream>
using namespace std;
int main () 
{
  int n,i,j,s;
  cout<<"enter the number";
  cin>>n;
  for(i=0;i<=n;i++)
  {
    for(s=0;s<n-i;s++)
    {
      cout<<" ";
      
    }
    for(j=0;j<i;j++)
    {
      cout<<" *";
      
    }
   cout<<"\n";
  }
  for(i=0;i<=n;i++)
  {
    for(s=0;s<i;s++)
    {
      cout<<" ";
      
    }
    for(j=0;j<n-i;j++)
    {
      cout<<" *";
      
    }
    cout<<"\n";
  }
  return 0;
}
  
  
