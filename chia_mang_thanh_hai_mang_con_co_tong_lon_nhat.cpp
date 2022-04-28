#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int vt = min(k, n - k);
        int *a = new int[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int sum1 = 0;
        for(int i = 0; i < vt; i++){
            sum1 += a[i];
        }
        int sum2 = 0;
        for(int i = vt; i < n; i++){
            sum2 += a[i];
        }
        cout << sum2 - sum1 << endl;
    }
}