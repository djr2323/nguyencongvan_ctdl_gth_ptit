#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x[105];
ll slove(ll n, ll k){
    while(n > 2){
        if(k <= x[n - 2]) n -= 2;
        else{
            k -= x[n - 2];
            n -= 1;
        }
    }
    if(n == 1) return 0;
    else return 1;
}

main(){
    x[1] = x[2] = 1;
    for(ll i = 3; i <= 93; i++){
        x[i] = x[i-2] + x[i-1];
    }
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << slove(n, k) << endl;

    }
}