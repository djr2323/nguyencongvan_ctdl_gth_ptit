#include<bits/stdc++.h>
using namespace std;
int n, p, s;
int ok[205];
vector<int> a;
vector<vector<int> > res;
void sngt(){
    memset(ok, 1, sizeof(ok));
    for(int i = 2; i <= 200; i++){
        if(ok[i]){
            a.push_back(i);
            for(int j = i*i; j <= 200; j += i){
                ok[j] = 0;
            }
        }
    }
}

voi slove(int i, vector<int> v, int sum){
   if(sum > s) return;
   if(sum == s && v.size() == n){
       res.push_back(v);
   }
   for(int j = i; j < a.size(); j++){
       if(!ok[j] && sum + a[j] <= s && v.size() < n){
           ok[j] = 1;
           v.push_back(a[j]);
           slove(j + 1, v, sum + a[j]);
           v.pop_back();
           ok[j] = 0;
       }
   }

}

main(){
    sngt();
    vector<int> ans;
    int t; cin >> t;
    while(t--){
        ans.clear();
        res.clear();
        cin >> n >> p >> s;
        int vt = lower_bound(a.begin(), a.end(), p) - a.begin();
        memset(ok, 0, sizeof(ok));
        slove(vt + 1, ans, 0);
        cout << res.size() << '\n';
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << ' ';
            }
            cout << endl;
        }
    }
}