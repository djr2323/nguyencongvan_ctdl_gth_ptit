#include<bits/stdc++.h>
using namespace std;

int n, k;
int x[20];
int a[20];
vector<vector<int> > res;

void outp(){
    vector<int> v;
    for(int i = 1; i <= k; i++){
       v.push_back(a[x[i]]);
    }
    sort(v.begin(), v.end());
    res.push_back(v);
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            outp();
        }else{
            Try(i + 1);
        }
    }
}

main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        Try(1);
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << ' ';
            }
            cout << endl;
        }
    }

}