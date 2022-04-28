#include<bits/stdc++.h>
using namespace std;
int n;
int x[100];
int a[100];
vector<vector<int> > res;

bool check(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

bool cmp(int a, int b){
    return a > b;
}

void outp(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(x[i]){
            sum += a[i  - 1];
        }
    }
    vector<int> v;
    if(check(sum)){
        for(int i = 1; i <= n; i++){
            if(x[i]){
                v.push_back(a[i - 1]);
            }
        }
        res.push_back(v);
    }
}

void Try(int id){
    for(int i = 0; i <= 1; i++){
        x[id] = i;
        if(id == n){
            outp();
        }else{
            Try(id + 1);
        }
    }
}

main(){
    int t; cin >> t;
    while(t--){
        memset(x, 0, sizeof(x));
        res.clear();
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, cmp);
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