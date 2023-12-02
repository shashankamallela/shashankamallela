#include<iostream>
using namespace std;
int main()
{
  int n,temp,r,res=0;
  cout<<"enter the number\n";
  cin>>n;
  temp=n;
  while(temp!=0)
  {
    r=temp%10;
    res+=r*r*r;
    temp/=10;
  }
  if(res==n)
    cout<<"it is narcissistic number";
  else
    cout<<"it is notnarcissistic number";
  return 0;
}
