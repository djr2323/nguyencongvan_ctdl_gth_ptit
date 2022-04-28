#include<bits/stdc++.h>
using namespace std;
int h[9] = {0}, c[9] = {0}, xuoi[16] = {0}, ngc[16] = {0};
int n = 8, res;
int a[9];
int val[9][9];
void input(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> val[i][j];
        }
    }
    res = 0;
}
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(!h[j] && !c[j] && !xuoi[i + j - 1] && !ngc[i - j + n]){
            a[i] = j;
            h[j] = c[j] = xuoi[i + j - 1] = ngc[i - j + n] = 1;
            if(i == n){
                int ans = 0;
                for(int l = 1; l <= 8; l++){
                    ans += val[l][a[l]];
                }
                res = max(res, ans);
            }else Try(i + 1);
            h[j] = c[j] = xuoi[i + j - 1] = ngc[i - j + n] = 0;
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t --){
        input();
        Try(1);
        cout << res << '\n';
    }
}


