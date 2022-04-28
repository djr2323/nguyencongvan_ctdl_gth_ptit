#include<bits/stdc++.h>
using namespace std;
bool sngt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int KT = 0;
        for(int i = 2; i < n; i++){
            if(sngt(i)&&sngt(n-i)){
                KT = 1;
                cout << i << ' ' << n - i;
                break;
            }
        }
        if(!KT) cout << -1;
        cout << endl;
    }
}