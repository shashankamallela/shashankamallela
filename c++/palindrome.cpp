#include<iostream>
using namespace std;
int main()
{
  int rev=0,rem,n,temp;
  cout<<"enter the number\n";
  cin>>n;
  temp=n;
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    
  }
  if(temp==rev)
    cout<<"it is palindrome";
  else
    cout<<"it is not palindrome";
}
