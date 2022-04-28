#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int mi = INT_MAX;
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] - a[i] < mi) mi = a[i + 1] - a[i];
        }
        cout << mi << endl;
    }
}