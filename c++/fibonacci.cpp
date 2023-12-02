#include <iostream>  
using namespace std;  
int main()
{  
  int a=0,b=1,c,i,n;    
 cout<<"Enter the number\n";    
 cin>>n;    
 cout<<a<<" "<<b<<" ";    
 for(i=2;i<n;i++)      
 {    
  c=a+b;    
  cout<<c<<" ";    
  a=b;    
  b=c;    
 }    
   return 0;  
   }  
