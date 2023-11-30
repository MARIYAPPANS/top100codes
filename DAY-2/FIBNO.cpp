//fibnoacii series
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,i,nxt;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;i++){
        nxt=a+b;
        a=b;
        b=nxt;
        cout<<nxt<<" ";
    }
}