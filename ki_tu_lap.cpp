#include<bits/stdc++.h>
using namespace std;
int n;
int x[20];
bool ok[20];
string s[20];
int res = INT_MAX;
int total(string a, string b){
    int ans = 0;
    for(auto x : a){
        for(auto y : b){
            if(x == y) ++ans;
        }
    }
    return ans;
}
void Try(int i, int sum){
    for(int j = 1; j <= n; j++){
        if(!ok[j]){
            ok[j] = true;
            x[i] = j;
            if(i == n){
                res = min(res, sum + total(s[x[i - 1]], s[j]));
            }else if(res > sum && i < n) Try(i + 1, sum + total(s[x[i - 1]], s[j]));
            ok[j] = false;
        }
    }
}

main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    Try(1, 0);
    cout << res;

}