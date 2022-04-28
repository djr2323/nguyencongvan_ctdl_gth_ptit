#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ull cmp(ull a, ull b){
    return a > b;
}
main(){
    int t;
    cin >> t;
    while(t--){
        ull n, x;
        cin >> n >> x;
        ull *a = new ull[n + 1];
        map<ull, ull> mp;
        for(ull i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }
        sort(a, a + n, cmp);
        int ok = 1;
        for(ull i = 0; i < n; i++){
            if(a[i] <= x){
                ok = 0;
                cout << mp[a[i]] + 1;
                break;
            }
        }
        if(ok) cout << -1;
        cout << '\n';
    }
}