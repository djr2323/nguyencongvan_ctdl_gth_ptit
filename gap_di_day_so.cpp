#include<bits/stdc++.h>
using namespace std;
using namespace std;
typedef long long ll;
ll Mul(ll n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll x = Mul(n/2);
    if(n%2 == 0) return x*x;
    else return x*x*2;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll len = Mul(n)/2;
        while(1){
            if(n == 1){
                cout << 1;
                break;
            }
            if(len == k ){
                cout << n;
                break;
            }
            if(k > len){
                k = len - (k - len);
            }
            n--;
            len /= 2;
        }
        cout << endl;
    }
}
