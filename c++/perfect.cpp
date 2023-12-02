#include<iostream>
using namespace std;
int main()
{
  int sum=0,i,n;
  cout<<"enter the number\n";
  cin>>n;
  for(i=1;i<n;i++)
  {
    if(n%i==0)
      sum=sum+i;
  }
  if(sum==n)
    cout<<"it is perfect";
  else
    cout<<"it is not perfect";
  return 0;
}
