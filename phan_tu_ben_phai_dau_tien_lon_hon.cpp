#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            int ok = 1;
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[i]){
                    ok = 0;
                    cout << a[j] << ' ';
                    break;
                }
            }
            if(ok) cout << -1 << ' ';
        }
        cout << '\n';
    }
}