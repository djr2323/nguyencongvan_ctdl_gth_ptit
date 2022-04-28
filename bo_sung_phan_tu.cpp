#include<bits/stdc++.h>
using namespace std;
main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        set<int> res;
        long long mi = INT_MAX;
        long long ma = INT_MIN;
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            res.insert(a[i]);
            if(a[i] < mi) mi = a[i];
            if(a[i] > ma) ma = a[i];
        }
        int dem = 0;
        for(int i = mi; i <= ma; i++){
            if(res.count(i) == 0) dem++;
        }
        cout << dem << '\n';
    }
}