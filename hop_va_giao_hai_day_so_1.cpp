#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 1], b[m + 1];
        set<int> s, x, y;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
            x.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            s.insert(b[i]);
            y.insert(b[i]);
        }
        for(int ans : s) cout << ans << ' ';
        cout << endl;
        for(int ans : x){
            if(y.count(ans) != 0) cout << ans << ' ';
        }
        cout << endl; 
    }

}