#include<iostream>
using namespace std;
int main()
{
  int n,temp,i,sum=0;
  cin>>n;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(n<sum)
    cout<<"abudant number";
  else
    cout<<"not abudant number";
  return 0;
  
}
