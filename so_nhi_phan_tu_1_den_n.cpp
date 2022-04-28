#include<bits/stdc++.h>
using namespace std;
void snp(int n){
    int a[10005];
    int dem = 0;
    while(1){
        a[dem++] = n%2;
        n /= 2;
        if(n == 0) break;
    }
    for(int i = dem - 1; i >= 0; i--) cout << a[i];
    cout << ' ';

}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            snp(i);
        }
        cout << endl;
    }
}