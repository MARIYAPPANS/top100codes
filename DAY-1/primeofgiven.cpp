#include<iostream>
using namespace std;
int main() {
  
  for(int k=1;k<=10;k++){
  int c=0;
  for(int i=1;i<=k;i++){
      if(k%i==0){
          c=c+1;
      }
  }
  if(c<3){
      cout<<k<<" ";
  }
  }
  
  return 0;
  
}
