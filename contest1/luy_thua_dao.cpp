#include<bits/stdc++.h>
using namespace std;
long long Max = 1000000007;
long long luythua(long long a, long long b){
    if(b == 0) return 1;
    long long x = luythua(a, b/2);
    if(b%2 == 0) return (x*x)%Max;
    else return (((x*x)%Max)*a)%Max;
}
long long daoso(long long n){
    long long m = 0;
    while(n > 0){
        m = m*10 + n%10;
        n /= 10;
    }
    return m;
}
main(){
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    int t;
    cin >> t;
    while(t--){
        long long a;
        cin >> a;
        long long b = daoso(a);
        cout << luythua(a, b) << endl;
    }
}