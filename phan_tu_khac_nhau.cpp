#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
main(){
    int t;
    cin >> t;
    while(t--){
        ull n;
        cin >> n;
        ull a[n], b[n - 1];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n - 1; i++) cin >> b[i];
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                cout << i + 1 << endl;
                break;
            }
        }
    }

}