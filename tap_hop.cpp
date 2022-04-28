#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int k, int &ok){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(!i) ok = 0;
    else{
        a[i] += 1;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        int n, k, s; cin >> n >> k >> s;
        if(!n && !k && !s) break;
        int a[k + 1], ok = 1, res = 0;
        for(int i = 1; i <= k; i++) a[i] = i;
        if(n >= k){
            while(ok){
                int sum = 0;
                for(int i = 1; i <= k; i++){
                    sum += a[i];
                }
                if(sum == s) res += 1;
                sinh(a, n, k, ok);
            }
        }
        cout << res;
        cout << '\n';
    }
}