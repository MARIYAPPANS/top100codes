#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem;
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=rem+sum*10;
        n=n/10;
    }
    cout<<sum;
}