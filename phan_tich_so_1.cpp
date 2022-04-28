#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int &cnt, int &ok){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        a[i] -= 1;
        int d = cnt - i + 1;
        cnt = i;
        int q = d/a[i];
        int r = d%a[i];
        if(q){
            for(int j = 1; j <= q; j++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt] = r;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 1, ok = 1;
        int a[10005];
        a[cnt] = n;
        while(ok){
            cout << "(";
            for(int i = 1; i <= cnt; i++){
                cout << a[i];
                if(i != cnt) cout << ' ';
                else cout << ") ";
            }
            sinh(a, n, cnt, ok);
        }
        cout << endl;

    }
}