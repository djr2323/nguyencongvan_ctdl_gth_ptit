#include<bits/stdc++.h>
using namespace std;

int n, ok, cnt, a[20];

void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        --a[i];
        int d = cnt - i + 1;
        cnt = i;
        int q = d/a[i];
        int r = d%a[i];
        if(q){
            for(int j = 1; j <= q; j++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt] = r;
        }
    }

}

main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        cnt = 1;
        a[1] = n;
        vector<vector<int> > res;
        while(ok){
            vector<int> ans;
            for(int i = 1; i <= cnt; i++){
                ans.push_back(a[i]);
            }
            res.push_back(ans);
            sinh();
        }
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << '(';
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j];
                if(j != res[i].size()- 1) cout << ' ';
            }
            cout << ") ";
        }
        cout << endl;
    }
}