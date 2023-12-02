#include<iostream>
using namespace std;
	int main()
    {
      int i,n,flag=0;
      cout<<"enter the number";
      cin>>n;
      for(i=1;i<=n;i++)
      {
        
      if(n%i==0)
        flag=flag+1;
      }
      if(flag==2)
        cout<<"it is prime";
      else
        cout<<"it is not prime";
      return 0;
      
    }
