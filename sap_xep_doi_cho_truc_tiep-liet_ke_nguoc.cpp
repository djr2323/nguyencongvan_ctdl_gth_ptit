#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> res[1001];
        int i;
        for(i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
            int ok = 1;
            for(int j = 0; j < n - 1; j++){
                if(a[j] > a[j + 1]) ok = 0;
            }
            for(int j = 0; j < n; j++){
                res[i].push_back(a[j]);
            }
            if(ok) break;
        }
        for(int k = i; k >= 0; k--){
            cout << "Buoc " << k + 1 << ": ";
            for(int j = 0; j < res[k].size(); j++){
                cout << res[k][j] << ' ';
            }
            cout << endl;
        }
    }
}