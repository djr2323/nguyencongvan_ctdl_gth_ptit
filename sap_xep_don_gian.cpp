#include<bits/stdc++.h>
using namespace std;
int N[100005] = {0}, M[100005];
void slove(int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        N[M[i]] = N[M[i] - 1] + 1;
        res = max(res, N[M[i]]);
    }
    cout << n - res;
}
main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> M[i];
    slove(n);

}