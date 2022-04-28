#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

vector<ull> a;
void vttt(ull n){
    ull t = 0;
    ull mu = 1;
    while(n/2 > 0){
        t++;
        if(t == 1){
            a.push_back(2);
            mu = 2;
        }else{
            mu *= 2;
            a.push_back(mu);
        }
        n /= 2;
    }
}

ull val(ull k, ull n, ull pos){
    if(k%2 == 1) return 1;
    if(k < a[pos])
        val(k, n/2, pos - 1);
    else if(k == a[pos]) return n%2;
    else if(k > a[pos]) val(2*a[pos] - k, n/2, pos - 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ull n, l, r, res = 0;
        a.clear();
        cin >> n >> l >> r;
        vttt(n);
        for(ull i = l; i <= r; i++){
            res += val(i, n, a.size() - 1);
        }
        cout << res << '\n';
    }
    return 0;

}