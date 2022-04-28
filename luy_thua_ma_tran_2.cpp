#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 1000000007
#define arr vector<ll>
#define matr vector<vector<ll>>
int n;
matr tich(matr a, matr b){
    matr c(n, vector<ll> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            for(int k = 0; k < n; k++){
                c[i][j] += ((a[i][k])%ma)*((b[k][j])%ma);
                c[i][j] %= ma;
            }
        }
    }
    return c;
}
matr MatPow(const matr& mt, ll n) {
    if(n%2 == 0 && n > 2)
         return MatPow(MatPow(mt,n/2), 2);
     else if ( n%2 && n > 2)
         return tich(MatPow(MatPow (mt,n/2),2), mt);
    else if ( n == 2 )
         return tich(mt, mt);
    else
         return mt;
}


main(){
    int t;
    cin >> t;
    while(t--){
        ll k;
        cin >> n >> k;
        matr a(20, vector<ll> (20));
        matr b(20, vector<ll> (20));
        for(int i = 0; i < n; i++){
            for(int j =  0; j < n; j++){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        matr ans = MatPow(a, k);
        ll res = 0;
        for(int i = 0; i < ans[n - 1].size(); i++){
            res += ans[i][n - 1];
        }
        res %= ma;
        cout << res << endl;
    }

}