#include <iostream>
using namespace std;
int main()
{
  int i, j, a=0;
  for(i=1;i<=5;i++)
  {
    for(j=i;j<5;j++)
    {
      cout<<" ";
    }
    for(j=1;j<=i;j++)
    {
      ++a;
      cout<<a;;
    }
    a--;
    for(j=1;j<i;j++)
    {
      cout<<a;
      a--;
    }
    cout<<endl;
    a++;
  }
}
