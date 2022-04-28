#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, vt;
        cin >> n >> k;
        int a[n];
        bool kt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == k){
                 kt = 1;
                 vt = i;
                 k = -1;
            }
        }
        if(kt) cout << vt + 1;
        else cout << "NO";
        cout << endl;
    }
}