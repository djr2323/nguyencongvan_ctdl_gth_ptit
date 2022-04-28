#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n - k + 1; i++){
            int ma = INT_MIN;
            for(int j = i; j < i + k; j++){
                if(a[j] > ma) ma = a[j];
            }
            cout << ma << ' ';
        }
        cout << endl;
    }
}