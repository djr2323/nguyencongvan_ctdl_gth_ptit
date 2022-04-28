#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0) a[i] = -1;
        }
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(count(a + i + 1, a + n, a[i]) != 0){
                cout << a[i];
                ok = 0;
                break;
            }
        }
        if(ok) cout << "NO";
        cout << endl;

    }
}