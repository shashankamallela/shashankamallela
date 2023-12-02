#include <iostream>
using namespace std;
int main () {
  int n=6;
  int arr[n]={2,3,4,7,8,9};
  for(int i=0;i<n/2;i++)
  {
    swap(arr[i],arr[n-i-1]);
  }
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
