#include<bits/stdc++.h>
using namespace std;
main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++) cin >> a[i];
        long long res = INT_MAX;
        long long ma = INT_MAX;
        for(long long i = 0; i < n - 1; i++){
            for(long long j = i + 1; j < n; j++){
                if(abs(a[i] + a[j]) < ma){
                    ma = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
}