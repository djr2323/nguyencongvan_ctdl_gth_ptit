#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int k){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i != 0){
        a[i] += 1;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n + 1];
        int b[n + 1];
        int c[100] = {0};
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
            c[a[i]] = 1;
        }
        sinh(a, n, k);
        for(int i = 1; i <= k; i++) c[a[i]] = 0;
        int res = 0;
        for(int i = 1; i <= k; i++) if(c[b[i]]) res++;
        if(res == 0) cout << k;
        else cout << res;
        cout << '\n';
    }
}