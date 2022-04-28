#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int x[16] = {0};
    int y[16] = {0};
    while(1){
        int dem = 0;
        int ok = 1;
        if(y[1] != 1 || y[n] != 0) ok = 0;
        for(int i = 1; i <= n - 1; i++){
            if(y[i] && y[i + 1]){
                 ok = 0;
                 break;
            }
        }
        for(int i = 1; i <= n - 3; i++){
            if(!y[i] && !y[i + 1] && !y[i + 2] && !y[i + 3]){
                 ok = 0;
                 break;
            }
        }
        for(int i = 1; i <= n; i++){
            if(y[i]) dem++;
        }
        if(ok == 1){
            for(int i = 1; i <= n; i++){
                cout << (y[i] ? 8 : 6);
            }
            cout << endl;
        }
        if(dem == n) break;
        for(int i = n; i >= 1; i--){
            if(!x[i]){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++){
                    y[j] = 0;
                }
                break;
            }
        }
        for(int i = 1; i <= n; i++) x[i] = y[i];
    }
}