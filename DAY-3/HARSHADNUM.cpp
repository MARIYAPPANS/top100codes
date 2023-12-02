//HARSHAD NUMBER
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,rev;
    while(n>0){
        rev=n%10;
        sum=sum+rev;
        n=n/10;
    }
    if(n%sum==0){
        cout<<"harshad number";
    }
    else{
        cout<<"not a harshad number";
    }
    
}