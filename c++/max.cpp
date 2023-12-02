#include<iostream>
using namespace std;
int main()
{
  int a,b,c,larger;
  cout<<"enter the a,b and c";
  cin>>a>>b>>c;
  larger = (a>b)?((a>c)?a:c):((b>c)?b:c);
  cout<<"the larger number is"<<larger;
  return 0;
}
