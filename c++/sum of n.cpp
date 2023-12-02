#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0;
  cout<<"enter a number\n";
  cin>>n;
  for(i=1;i<=n;i++)
    sum+=i;
  cout<<"sum is="<<sum;
  return 0;
}
