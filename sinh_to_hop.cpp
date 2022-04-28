#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int k, int &ok){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i] += 1;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}
main(){
    int n, k, ok = 1; cin >> n >> k;
    int a[n + 1];
    for(int i = 1; i <= k; i++) a[i] = i;
    while(ok){
        for(int i = 1; i <= k; i++) cout << a[i] << ' ';
        cout << '\n';
        sinh(a, n, k, ok);
    }
}