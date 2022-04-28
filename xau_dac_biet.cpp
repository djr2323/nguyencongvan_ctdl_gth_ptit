#include<bits/stdc++.h>
using namespace std;

main(){
    int n, k;
    cin >> n >> k;
    int x[101] = {0}, y[101] = {0};
    vector<string> res;
    int dem = 0;
    while(1){
        int count = 0;
        int kt = 0;
        for(int i = 1; i <= n; i++){
            if(!y[i]) kt = 1;
            x[i] = y[i];
            if(y[i]) count++;
        }
        int ok = 0;
        for(int i = 1; i <= n - k + 1; i++){
            int ok1 = 1;
            for(int j = i; j < i + k; j++){
                if(!y[j]) ok1 = 0;
            }
            if(ok1 && !y[i - 1] && !y[i + k]) ok = 1;
        }
        if(ok && kt){
            dem++;
            string s = "";
            for(int i = 1; i <= n; i++){
                if(y[i]) s += "A";
                else s += "B";
            }
            res.push_back(s);
        }
        if(count == n) break;

        for(int i = n; i >= 1; i--){
            if(!x[i]){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++) y[j] = 0;
                break;
            }
        }
    }
    sort(res.begin(), res.end());
    cout << dem << endl;
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }
    
}