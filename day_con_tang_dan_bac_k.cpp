#include<bits/stdc++.h>
using namespace std;
main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int x[101] = {0}, y[101] = {0};
    int res = 0;
    vector<int> ans;
    while(1){
        ans.clear();
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(y[i]){
                ans.push_back(a[i]);
                count++;
            }
            x[i] = y[i];
        }
        if(count == k){
            int ok = 1;
            for(int i = 0; i < ans.size() - 1; i++){
                if(ans[i] > ans[i + 1]){
                    ok = 0;
                    break;
                }
            }
            if(ok) res++;
        }
        if(count == n) break;
        for(int i = n; i >= 1; i--){
            if(!x[i]){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++){
                    y[j] = 0;
                }
                break;
            }
        }
    }
    cout << res;
}