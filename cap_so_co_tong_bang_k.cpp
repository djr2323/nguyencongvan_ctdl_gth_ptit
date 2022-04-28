#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n;
        long long k; 
        cin >> n >> k;
        long long a[n];
        long long b[n] = {0};
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int res = 0;
        for(int i = 0; i < n; i++){
            int pos = lower_bound(a, a + n, k - a[i]) - a;
            if(binary_search(a, a + n, k - a[i]) && !b[i]){
                b[i] = 1;
                b[pos] = 1;
                ++res;
            }
        }
        cout << res << endl;
    }
}