#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int val;
    int slxh;
}q;
int cmp(q a, q b){
    if(a.slxh > b.slxh) return 1;
    else if(a.slxh == b.slxh){
        if(a.val < b.val) return 1;
        else return 0;
    }else return 0;
}
main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        int b[100005] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        q ans[10005];
        for(int i = 0; i < n; i++){
            ans[i].val = a[i];
            ans[i].slxh = b[a[i]];
        }
        sort(ans, ans + n, cmp);
        for(int i = 0; i < n; i++){
            cout << ans[i].val << ' ';
        }
        cout << endl;
    }
}