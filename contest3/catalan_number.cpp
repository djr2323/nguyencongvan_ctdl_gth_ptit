#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    unsigned long long a[101] = {0};
    cin >> t;
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    a[3] = 5;
    a[4] = 14;
    a[5] = 42;
    a[6] = 132;
    a[7] = 429;
    for(int i = 8; i <= 100; i++){
        for(int j = 0; j <= i - 1; j++){
            a[i] += a[j]*a[i-j-1];
        }
    }
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}