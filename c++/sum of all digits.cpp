#include<iostream>
using namespace std;
int main()
{
  int digit,sum=0,n;
  cout<<"enter the number\n";
  cin>>n;
  while(n!=0)
  {
    digit=n%10;
    sum+=digit;
    n=n/10;  
  }
  cout<<"sum is"<<sum;
  return 0;
}
