#include <iostream>
using namespace std;
int main (){
  int largest1=0,largest2=0,i;
  int arr[]={1,2,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);

 for(i=0;i<n;i++)
 {

   if(arr[i]>largest1)
   {

     largest2=largest1;

     largest1=arr[i];

   }

   if(arr[i]>largest2&&arr[i]<largest2){

     largest2=arr[i];

 }

 }

  cout<<largest2;
   return 0;
}
