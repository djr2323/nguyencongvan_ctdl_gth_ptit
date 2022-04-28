#include<bits/stdc++.h>
using namespace std;
main(){
    int n, w; cin >> n >> w;
    int c[n + 1], a[n + 1];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++) cin >> a[i]; 
    int x[101] = {0};
    int y[101] = {0};
    vector<int> ans;
    int ma = INT_MIN;
    while(1){
        int count = 0;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 1; i <= n; i++){
            if(y[i]){
                sum1 += c[i];
                sum2 += a[i];
            }
            x[i] = y[i];
            if(y[i]) count++;
        }
        if(sum2 <= w){
            if(ma <= sum1){
                ma = sum1;
                ans.clear();
                for(int i = 1; i <= n; i++){
                    ans.push_back(y[i]);
                }
            }
        }
        if(count == n) break;
        for(int i = n; i >= 1; i--){
            if(x[i] == 0){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++){
                    y[j] = 0;
                }
                break;
            }
        }
    }
    cout << ma << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
}