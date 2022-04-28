#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int b[1001];
    int dem = 0;
    b[dem++] = a[0]*a[1];
    b[dem++] = a[0]*a[1]*a[n - 1];
    b[dem++] = a[n - 1]*a[n - 2];
    b[dem++] = a[n - 1]*a[n - 2]*a[n - 3];
    sort(b, b + dem);
    cout << b[dem - 1];
}