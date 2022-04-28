#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, res = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == k) res++;
        }
        if(res == 0) cout << -1;
        else cout << res;
        cout << endl;
    }
}