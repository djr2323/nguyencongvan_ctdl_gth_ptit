#include<bits/stdc++.h>
using namespace std;
int n;
void In(int a[],int L[],int R[]){
    for(int i=0;i<n;++i){
        cin>>a[i];
        L[i]=1;
        R[i]=1;
    }
}
void Out(int a[],int L[],int R[]){
    int Max=0;
    for(int i=1;i<n;++i)
        if(a[i]>a[i-1]) L[i]=L[i-1]+1;
    for(int i=n-2;i>=0;--i)
        if(a[i]>a[i+1]) R[i]=R[i+1]+1;
    for(int i=0;i<n;++i){
        int x=L[i]+R[i]-1;
        if(x>Max) Max=x;
    }
    cout<<Max<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        int a[n],L[n],R[n];
        In(a,L,R);
        Out(a,L,R);
    }
    return 0;
}