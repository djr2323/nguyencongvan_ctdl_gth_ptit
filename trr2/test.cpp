#include<bits/stdc++.h>
using namespace std;

int n, d[10][10] = {0}, a[10][10] = {0}, truoc[10][10] = {0};

void floyd(){
    cin >> n; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0){
                d[i][j] = a[i][j];
                truoc[i][j] = j;
            }else{
                d[i][j] = 1000000;
                truoc[i][j] = 0;
            }
        }
    }
    
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    truoc[i][j] = truoc[i][k];
                }
            }
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int tmp = i;
            if(i == j){
                cout << "K/c " << i << " -> " << j << " = " << 0 << ";        ";
                cout << i;
            }
            else if(d[i][j] == 999989){
                cout << "K/c " << i << " -> " << j << " = " << "INF\n"; continue;
            }
            else{
                cout << "K/c " << i << " -> " << j << " = " << d[i][j] << ";        ";
                while(tmp != j){
                    if(tmp == 0) break;
                    cout << tmp << " --> ";
                    tmp = truoc[tmp][j];
                }
                if(tmp != 0) cout << j;
            }
            cout << endl;
        }
        cout << "\n\n\n";
    }
}

main(){
    floyd();
}