#include<bits/stdc++.h>
using namespace std;
int N[1001], V[1001];
int dp[1001][1001];
main(){
    int t; cin >> t;
    while(t--){
        int n, v; cin >> n >> v;
        for(int i = 1; i <= n; i++) cin >> V[i];
        for(int i = 1; i <= n; i++) cin >> N[i];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= v; j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
                else{
                    if(j < V[i]) dp[i][j] = dp[i - 1][j];
                    else dp[i][j] = max(dp[i - 1][j], N[i] + dp[i - 1][j - V[i]]);
                }
            }
        }
        cout << dp[n][v] << endl;
    }
}