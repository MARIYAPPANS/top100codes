//ABUDANT NUMBER
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum>a){
        cout<<"abudant number";
    }
    else{
        cout<<"not a abudant number";
    }
    
}