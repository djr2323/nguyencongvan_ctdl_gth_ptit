#include<bits/stdc++.h>
using namespace std;
void sinh(int a[], int n, int &ok){
    int i = n - 1;
    while(i >= 1 && a[i] >= a[i + 1]){
        --i;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] >= a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int tt; cin >> tt;
        string s; cin >> s;
        cout << i << ' ';
        int l = s.length();
        int a[l + 1];
        for(int j = 0; j < l; j++){
            a[j + 1] = int(s[j] - '0');
        }
        int ok = 1;
        sinh(a, l, ok);
        if(!ok) cout << "BIGGEST";
        else{
            for(int j = 1; j <= l; j++) cout << a[j];
        }
        cout << '\n';

    }

}