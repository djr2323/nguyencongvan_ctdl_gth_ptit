#include<bits/stdc++.h>
using namespace std;
main(){
    long long t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a, a + n);
        int res = 0, ma = INT_MIN;
        for(int x : s){
            int dem = 0;
            for(int i = 0; i < n; i++){
                if(x == a[i]) dem++;
            }
            if(dem > ma){
                ma = dem;
                res = x;
            }
        }
        if(ma > n/2) cout << res << '\n';
        else cout << "NO" << '\n';
    }
}