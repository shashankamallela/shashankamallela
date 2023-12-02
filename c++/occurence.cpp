#include <iostream>
using namespace std;
int main () {
  int arr[]={1,2,3,4,5,3,4,2,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int value=4;
  int count=0;
  for(int i=0;i<n;i++) {
    if(arr[i]==value) {
      count++;
    }
  }
  cout<<"the value "<<value<<" appears "<<count<<" in the array"<<endl;
  return 0;
}
