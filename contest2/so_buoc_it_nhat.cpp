#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5], dp[n + 5] = {0}, res = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i =  0; i < n; i++){
            dp[i] = 1;
            for(int j = 0; j < i; j++){
                if(a[i] >= a[j]) dp[i] = max(dp[i], dp[j] + 1);
            }
            res = max(res, dp[i]);
        }
        cout << n - res << '\n';
    }
}