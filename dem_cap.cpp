#include<bits/stdc++.h>
using namespace std;
main(){
    long long t; cin >> t;
    while(t--){
        long long n, k; cin >> n >> k;
        long long a[n];
        for(long long i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long res = 0;
        for(long long i = 0; i < n - 1; i++){
            res += lower_bound(a + i + 1, a + n, k + a[i]) - a - i - 1;
        }
        cout << res << endl;
    }
}