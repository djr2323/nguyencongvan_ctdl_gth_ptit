#include<bits/stdc++.h>
using namespace std;
int a[100001];
main(){
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    for(int i = 4; i <= 100000; i++){
        int mi = INT_MAX;
        if(i%2 == 0) mi = min(mi, a[i/2]);
        if(i%3 == 0) mi = min(mi, a[i/3]);
        mi = min(mi, a[i - 1]);
        a[i] = mi + 1;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
}