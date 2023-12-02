//friendly pair
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0,sumb=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    for(int j=1;j<=b;j++){
        if(b%j==0){
            sumb=sumb+j;
        }
    }
    if((sum/a)==(sumb/b)){
        cout<<"friendly pair";
    }
    else{
        cout<<"not a friendly pair";
    }
    
}