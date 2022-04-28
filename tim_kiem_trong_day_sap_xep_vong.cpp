#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int vt = -1;
        for(int i = 0; i < n; i++){
            if(a[i] == k){
                vt = i;
                break;
            }
        }
        cout << vt + 1 << endl; 
        
    }
}