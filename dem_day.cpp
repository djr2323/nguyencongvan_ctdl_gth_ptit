#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 123456789;
ll power(ll n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll x = power(n/2);
    if(n%2 == 0) return (x*x)%mod;
    else return ((x*x)%mod*2)%mod;
}
main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        n -= 1;
        cout << power(n) << endl;
    }
}