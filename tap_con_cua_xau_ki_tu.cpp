#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int x[20];
vector<vector<char> > res;

void outp(){
    vector<char> v;
    for(int i = 1; i <= n; i++){
        if(x[i]){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    res.push_back(v);
}

void slove(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            outp();
        }else slove(i + 1);
    }
}

main(){
   int t; cin >> t;
   while(t--){
       res.clear();
        cin >> n >> s;
        s = '*' + s;
        slove(1);
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++){
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j];
            }
            cout << ' ';
        }
        cout << endl;
   }

}