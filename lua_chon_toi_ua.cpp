#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n+5], b[n+5];
    int mi = 100001, ma = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cin >> b[i];
        mi = min(mi, a[i]);
        ma = max(ma, b[i]);
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[a[i]] = b[i];
    }
    for(int i = mi; i <= ma; i++){
        for(int j = i; j <= ma - 1; j++){
            if(mp[i] <= j){
                swap(mp[i], j);
            }
        }
    }
    for(int i = mi; i <= ma; i++){
        cout << mp[i] << ' ';
    }
}