#include<bits/stdc++.h>
using namespace std;

int n, a[1005][1005] = {0}, d[1005][1005] = {0}, nextt[1005][1005] = {0};

void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            
            if(a[i][j] != 0){
                d[i][j] = a[i][j];
                nextt[i][j] = j;
            }
            else{
                nextt[i][j] = 0;
                d[i][j] = 1000000;
            }

        }
    }
}

void floyd(){
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][j] > d[i][k] + d[k][j]){
                    d[i][j] = d[i][k] + d[k][j];
                    nextt[i][j] = nextt[i][k];
                }
            }
        }
    }

    for(int s = 1; s <= n; s++){
        for(int i = 1; i <= n; i++){
            int tmp = s;
            vector<int> ans;
            if(s == i){
                cout << "K/c " << s << " -> " << i << " = " << 0 << ";      ";
                cout << s;
            }else if(d[s][i] == 999989){
                cout << "K/c " << s << " -> " << i << " = " << "INF;\n";
                continue;
            }
            else{
                cout << "K/c " << s << " -> " << i << " = " << d[s][i] << ";      ";
                while(tmp != i){
                    if(tmp == 0) break;
                    cout << tmp << " --> ";
                    tmp = nextt[tmp][i];
                }
                if(tmp != 0) cout << tmp;
            }
            cout << "\n";
        }
        cout << "\n\n\n\n";
    }
}

main(){
    init();
    floyd();
}