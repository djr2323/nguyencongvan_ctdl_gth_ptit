#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                cout << i + 1 << ' ';
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(a[i] != b[i]){
                cout << i + 1;
                break;
            }
        }
        cout << endl;
    }
}