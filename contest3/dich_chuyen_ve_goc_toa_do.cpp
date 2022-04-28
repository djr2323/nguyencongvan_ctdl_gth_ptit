#include<bits/stdc++.h>
using namespace std;
main(){
    long long dp[30][30];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i <= 25; i++)
        dp[i][0] = 1;
    for(int j = 0; j <= 25; j++)
        dp[0][j] = 1;
    dp[0][0] = 1;
    for(int i = 0; i <= 25; i++){
        for(int j = 0; j <= 25; j++){
            if(i == 0 || j == 0) continue;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << dp[n][m] << endl;
    }
}