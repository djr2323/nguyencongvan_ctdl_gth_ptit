#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        long long a[5005];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int ok = 1;
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                if((upper_bound(a + j + 1, a + n, k - a[i] - a[j]) - a - j - 1) - (lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a - j - 1) != 0){
                    cout << "YES";
                    ok = 0;
                    break;
                }
            }
            if(ok == 0) break;
        }
        if(ok) cout << "NO";
        cout << endl;
    }
}