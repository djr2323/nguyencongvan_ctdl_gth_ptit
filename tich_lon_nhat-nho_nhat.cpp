#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        long long mi = INT_MAX, ma = INT_MIN;
        for(int i = 0; i < n; i++){
             cin >> a[i];
             if(a[i] > ma){
                 ma = a[i];
             }
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            if(b[i] < mi){
                mi = b[i];
            }
        }
        long long res = ma*mi;
        cout << res << endl;
    }
}