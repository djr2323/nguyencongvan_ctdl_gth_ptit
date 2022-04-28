#include<bits/stdc++.h>
using namespace std;
main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long ok = 0;
        for(long long i = 0; i < n - 2; i++){
            for(long long j = i + 1; j < n - 1; j++){
                if(binary_search(a + j + 1, a + n, sqrt(a[i]*a[i] + a[j]*a[j]))){
                    cout << "YES";
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }
        if(!ok) cout << "NO";
        cout << '\n';
    }
}