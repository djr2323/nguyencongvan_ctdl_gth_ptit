#include<bits/stdc++.h>
using namespace std;
int M[1000];
int dp[101][25001] = {0};
main(){
    int k, n;
    cin >> k >> n;
    for(int i = 1; i <= n; i++) cin >> M[i];
    for(int j = 1; j <= k; j++) dp[0][j] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            dp[i][j] = dp[i - 1][j];
            if(M[i] <= j) dp[i][j] = max(dp[i][j], dp[i - 1][j - M[i]] + M[i]);
        }
    }
    cout << dp[n][k];
}