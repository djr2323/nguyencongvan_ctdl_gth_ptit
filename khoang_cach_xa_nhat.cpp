#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int val;
    int vt;
}q;
int cmp(q a, q b){
    return a.val < b.val;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int b[100005];
        q a[100005];
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(i);
            cin >> b[i];
            a[i].val = b[i];
            a[i].vt = i;
        }
        sort(a, a + n, cmp);
        int res = 0;
        for(int i = 0; i < n - 1; i++){
            int pos = a[i].vt;
            s.erase(pos);
            res = max(res, *s.rbegin() - pos);
        }
        if(res == 0) cout << -1 << '\n';
        else cout << res << '\n';
    }
}