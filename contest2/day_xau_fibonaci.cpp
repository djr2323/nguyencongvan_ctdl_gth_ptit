#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll F[93];
void slove(){
    ll n, i;
    cin >> n >> i;
    while(n > 2){
        if(i <= F[n - 2]) n -= 2;
        else{
            i -= F[n - 2];
            n -= 1;
        }
    }
    if(n == 1) cout << 'A';
    else cout << 'B';
    cout << '\n';
}
main(){
    F[1] = F[2] = 1;
    for(int i = 3; i <= 92; i++){
        F[i] = F[i - 2] + F[i - 1];
    }
    int t;
    cin >> t;
    while(t--){
        slove();
    }

}