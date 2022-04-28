#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5];
        int k = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            k += a[i];
        }
        if(k%2 == 1) cout << "NO";
        else{
            int s = k/2;
            int dp[s + 1];
            dp[0] = 0;
            for(int i = 0; i < n; i++){
                dp[a[i]] = 1;
                for(int j = s; j > a[i]; j--){
                    if(dp[j - a[i]] == 1) dp[j] = 1;
                }
            }
            if(dp[s]) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
}