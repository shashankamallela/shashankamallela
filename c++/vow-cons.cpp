#include<iostream>
using namespace std;
int main()
{
  char c;
  int lowercase_level,uppercase_level;
  cout<<"enter an alphabet\n";
  cin>>c;
  lowercase_level=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase_level=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase_level||uppercase_level)
    cout<<"it is a vowel";
  else
    cout<<"it is a consonant";
  return 0;
  
}

