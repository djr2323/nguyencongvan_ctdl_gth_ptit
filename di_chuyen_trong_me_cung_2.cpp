#include<bits/stdc++.h>
using namespace std;
int n;
int a[10][10];
bool kt[10][10];
vector<string> res;


void path(int i, int j, string s){
    if(a[1][1] == 0 || a[n][n] == 0) return;
    if(i == n && j == n){
        res.push_back(s);
    }
    if(a[i + 1][j] && i != n && !kt[i + 1][j]){

        kt[i][j] = true;
        path(i + 1, j, s + "D");
        kt[i][j] = false;
        
    }
    if(a[i][j + 1] && j != n && !kt[i][j + 1]){
        kt[i][j] = true;
        path(i, j + 1, s + "R");
        kt[i][j] = false;
    }
    if(a[i][j - 1] && j != 1 && !kt[i][j - 1]){
        kt[i][j] = true;
        path(i, j - 1, s + "L");
        kt[i][j] = false;
    }
    if(a[i - 1][j] && i != 1 && !kt[i - 1][j]){
        kt[i][j] = true;
        path(i - 1, j, s + "U");
        kt[i][j] = false;
    }
}




void slove(){
    res.clear();
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            kt[i][j] = false;
        }
    }
    path(1, 1, "");
    if(res.size() == 0) cout << -1;
    else{
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++) cout << res[i] << ' ';
    }


}


main(){
    int t; cin >> t;
    while(t--){
        slove();
        cout << endl;
    }

}