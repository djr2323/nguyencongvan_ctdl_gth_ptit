#include<bits/stdc++.h>
using namespace std;
main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n], mi = INT_MAX, vt;
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < mi){
                mi = a[i];
                vt = i;
            }
        }
        cout << vt << endl;
    }
}