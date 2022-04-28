#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        long long dp[n + 5] = {0};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= min(i, k); j++){
                dp[i] += dp[i - j];
                dp[i] %= mod;
            }
        }
        cout << dp[n] << endl;
    }
}