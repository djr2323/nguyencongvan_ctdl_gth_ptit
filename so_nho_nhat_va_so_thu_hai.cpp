#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        set<int> res;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            res.insert(a[i]);
        }
        int id = 0;
        int mi0, mi1;
        for(int x : res){
            ++id;
            mi1 = x;
            if(id == 2) break;
            mi0 = x;
        }
        if(mi0 == mi1) cout << -1;
        else cout << mi0 << ' ' << mi1;
        cout << endl;
    }
}