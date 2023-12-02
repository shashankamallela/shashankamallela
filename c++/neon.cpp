#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,sq,i,sum=0;
  cout<<"enter the number";
  cin>>n;
  sq=pow(n,2);
  while(sq!=0)
  {
    sum+=sq%10;
    sq/=10;
    
  }
  if(sum==n)
    cout<<"is neon";
  else
    cout<<"is not neon";
  return 0;
}
