#include<bits/stdc++.h>
using namespace std;
int n, vo;
int a[1001][1001];
vector<int> ke[1001];
int X[1001];
int chuaxet[1001];

void inp(){
    cin >> n >> vo;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]) ke[i].push_back(j);
        }
    }
}

void outp(){
    for(int i = 1; i <= n; i++){
        cout << X[i] << ' ';
    }
    cout << vo;
    cout << endl;
}

void hmt(int k){
    for(int y : ke[X[k - 1]]){
        if(k == n + 1 && y == vo){
            outp();
        }else if(chuaxet[y]){
            X[k] = y;
            chuaxet[y] = 0;
            hmt(k + 1);
            chuaxet[y] = 1;
        }
    }
}

main(){
    inp();
    memset(chuaxet, 1, sizeof(chuaxet));
    X[1] = vo;
    chuaxet[vo] = 0;
    hmt(2);
}
