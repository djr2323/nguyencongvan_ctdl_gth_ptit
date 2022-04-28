#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
int n, x;
int *a = new int[100];
void Try(int i, int sum, vector<int> v){
    if(sum > x){
        return;
    }
    if(sum == x){
        res.push_back(v);
        return;
    }
    for(int j = i; j <= n; j++){
        if(sum + a[j] <= x){
            v.push_back(a[j]);
            Try(j, sum + a[j], v);
            v.pop_back();
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        res.clear();
        cin >> n >> x;
        vector<int> ans;
        for(int i = 1; i <= n; i++) cin >> a[i];
        Try(1, 0, ans);
        if(!res.size()) cout << -1;
        else{
            cout << res.size();
            for(int i = 0; i < res.size(); i++){
                cout << " {";
                for(int j = 0; j < res[i].size(); j++){
                    cout << res[i][j];
                    if(j != res[i].size() - 1) cout << ' ';
                }
                cout << "} ";
            }

        }
        cout << '\n';

    }
}