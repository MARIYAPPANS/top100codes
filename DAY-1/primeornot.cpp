#include<iostream>
#include<math.h>
using namespace std;

int main() {
   int a,c=0;
   cin>>a;
  for(int i=1;i<=a;i++){
      if(a%i==0){
          c=c+1;
      }
  }
  cout<<(c<3 ? "prime":"not prime");
  return 0;
  
}
