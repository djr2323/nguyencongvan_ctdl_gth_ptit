#include<bits/stdc++.h>
using namespace std;
map<long long, bool> d;
string s;
int n;
int x[50];
int res = 0;
void input(){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(x[i]){
            ans = ans*10 + int(s[i - 1] - '0');
        }
    }
    if(d[ans] && ans != 0 && res < ans){
        res = ans;
    }
}
void Try(int id){
    for(int i = 0; i <= 1; i++){
        x[id] = i;
        if(id == n){
            input();
        }else{
            Try(id + 1);
        }
    }
}
main(){
    for(int i = 1; i <= 10000; i++){
        d[i*i*i] = true;
    }
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.length();
        Try(1);
        if(res == 0) cout << -1;
        else cout << res << endl;
        res = 0;
    }
}