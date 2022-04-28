#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int &ok){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
main(){
    int n, ok = 1; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) a[i] = i;
    while(ok){
        for(int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
        sinh(a, n, ok);

    }
}