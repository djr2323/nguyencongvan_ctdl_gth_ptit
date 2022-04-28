#include<bits/stdc++.h>
using namespace std;
main(){
    long long t; cin >> t;
    while(t--){
        long long n, m, k; cin >> n >> m >> k;
        vector<long long> a(n), b(m), c(k);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        vector<long long> ans;
        long long x = 0, y = 0, z = 0;
        while(x < n && y < m && z < k){
            if(a[x] == b[y] && b[y] == c[z]){
                ans.push_back(a[x]);
                x++, y++, z++;
            }else if(a[x] < b[y]){
                x++;
            }else if(b[y] < c[z]){
                y++;
            }else z++;
        }
        if(ans.size() == 0) cout << -1;
        else{
            for(auto x : ans) cout << x << ' ';
        }
        cout << '\n';
    }
}