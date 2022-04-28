#include<bits/stdc++.h>
using namespace std;
long long int ma = 1000000007;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (a[i]*i)%ma;
            sum %= ma;
        }
        cout << sum << endl;
    }

}