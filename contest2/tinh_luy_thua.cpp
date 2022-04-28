#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ma = 1e9 + 7;
ll lth(ll a, ll k){
    if(k == 0) return 1;
    ll x = lth(a, k/2);
    if(k%2 == 0) return (x*x)%ma;
    else return (((x*x)%ma)*a)%ma;
}
main(){
    while(1){
        ll a, n;
        cin >> a >> n;
        if(a == 0 && n == 0) break;
        cout << lth(a, n)<< '\n';
    }
}