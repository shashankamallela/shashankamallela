#include <iostream>
using namespace std;
int main ()  {
  int n,temp,sum=0;
  cout<<"enter the number\n";
  cin>>n;
  while(sum !=1 && sum !=4) {
    sum=0;
    while(n>0)  {
      temp=n%10;
      sum +=temp*temp;
      n /=10;
    }
    n=sum;
  }
  if(sum==1) 
    cout<<" is happy number";
   else 
    cout<<" is not happy number";
  
  return 0;
}
