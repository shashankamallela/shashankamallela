#include<iostream>
using namespace std;
int main()
  
{
  int remainder,fact,sum=0,i,n,copynum;
  cout<<"enter the number";
  cin>>n;
  copynum=n;
  while(n!=0)
  {
    remainder=n%10;
    fact=1;
    for(i=1;i<=remainder;i++)
    {
      fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
  }
  if(sum==copynum)
    cout<<"is strong";
  else
    cout<<"is not strong";
  return 0;
  
}
