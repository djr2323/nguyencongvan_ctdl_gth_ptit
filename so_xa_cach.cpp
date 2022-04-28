#include<bits/stdc++.h>
using namespace std;
int n;
int x[20];
int unused[20];

void input(){
    int ok = 1;
    for(int i = 1; i <= n - 1; i++){
        if(abs(x[i] - x[i + 1]) == 1){
            ok = 0;
            break;
        }
    }
    if(ok){
        for(int i = 1; i <= n; i++){
            cout << x[i];
        }
        cout << endl;
    }
}

void slove(int i){
    for(int j = 1; j <= n; j++){
        if(unused[j]){
            x[i] = j;
            unused[j] = 0;
            if(i == n){
                input();
            }else{
                slove(i + 1);
            }
            unused[j] = 1;
        }
    }
}

main(){
    int t;
    cin >> t;
    while(t--){
        memset(unused, 1, sizeof(unused));
        cin >> n;
        slove(1);
    }
}