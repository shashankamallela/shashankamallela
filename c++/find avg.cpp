#include <iostream>
using namespace std;
int main () 
{
  int sum=0;
  float avg;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++) {
    sum +=arr[i];
  }
  avg=(float)sum/n;
  cout<<sum<<endl;
  cout<<avg<<endl;
}
