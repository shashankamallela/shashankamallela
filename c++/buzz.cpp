#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number";
  cin>>n;
  if(n%7==0||n%10==7)
    cout<<"it is buzz number";
  else
    cout<<"it is not buzz number";
  return 0;
}
