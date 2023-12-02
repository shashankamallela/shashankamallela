#include<iostream>
using namespace std;
int main()
{
  int arr[6],i,elem;
  cout<<"\nenter 5 array elements";
  for(i=0;i<5;i++)
    cin>>arr[i];
  cout<<"\nenter elements to insert";
  cin>>elem;
  arr[i]=elem;
  cout<<"\nthe new array is";
  for(i=0;i<6;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}
