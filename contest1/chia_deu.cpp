#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[26];
int dem = 0;
void input(){
    int sum[50] = {0};
    int w = 0;
    int ok = 0;
    for(int i = 2; i <= n + n -1; i += 2){
        if(a[i] == 10001) ok++;
    }
    if(ok == k - 1){
        for(int i = 1; i <= n + n - 1; i++){
            if(a[i] == 10001){
                 w += 1;
            }else{
                sum[w] += a[i];
            }
        }
    }
    int ok1 = 1;
    for(int i = 0; i < w - 1; i++){
        if(sum[i] != sum[i + 1]){
            ok1 = 0;
            break;
        }
    }
    if(ok1 && w != 0 && w!= 1) dem++;
    if(sum[0] == sum[1] && w == 1) dem++;
}
void Try(int id){
    for(int i = 0; i <= 10001; i += 10001){
        a[id] = i;
        if(id == n + n - 2){
            input();
        }else{
            Try(id + 2);
        }
    }
}
main(){
    memset(a, 0, sizeof(a));
    cin >> n >> k;
    for(int i = 1; i <= n + n - 1; i += 2){
        cin >> a[i];
    }
    Try(2);
    if(k == 1) dem++;
    cout << dem;
}