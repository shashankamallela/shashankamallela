#include<iostream>
using namespace std;
int main () {
  int sum=0;
  int arr[]={5,6,8,7,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++) {
    sum +=arr[i];
  }
  cout<<sum<<endl;
  return 0;
}
