//power
#include<iostream>
using namespace std;
int main()
{
  int b,p,r=1;
  cin>>b>>p;
  while(p>0){
      r=r*b;
      p--;
  }
  cout<<r;
}