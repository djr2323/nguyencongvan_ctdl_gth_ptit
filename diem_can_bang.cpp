#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int ok = 1;
        long long sum1 = 0;
        sum -= a[0];
        for(int i = 1; i < n; i++){
            if(sum == sum1){
                cout << i;
                ok = 0;
                break;
            }
            sum1 += a[i - 1];
            sum  -= a[i];
        }
        if(ok) cout << -1;
        cout << '\n';
    }
}