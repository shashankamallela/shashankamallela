#include <iostream>
using namespace std;
int main () {
  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9,10};
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  int mergedsize=n1+n2;
  int mergedarray[mergedsize];
  for(int i=0;i<n1;i++) {
    mergedarray[i]=arr1[i];
  }
  for(int i=0;i<n2;i++) {
    mergedarray[n1+i]=arr2[i];
  }
  for(int i=0;i<mergedsize;i++) {
    cout<<mergedarray[i]<<" ";
  }
  return 0;
}                                        
                   
