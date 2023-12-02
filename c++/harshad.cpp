#include<iostream>
using namespace std;
int main()
{
  int rem,sum=0,n;
  cout<<"enter the number\n";
  cin>>n;
  while(n!=0)
  {
    rem=n%10;
    sum+=rem;
    n/=10;
    
  }
  if(n%sum==0)
    cout<<"it is harshad number";
  else
    cout<<"it is not harshad number";
  
}
