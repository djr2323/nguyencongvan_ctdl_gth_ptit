#include<bits/stdc++.h>
using namespace std;
int n;
int X[1001];
int unused[1001];
map<int, string> mp;
void input(){
    int ok = 1;
    for(int i = 2; i <= n - 1; i++){
        if(X[i] == 1 || X[i] == 5){
            if(X[i - 1] != 1 && X[i - 1] != 5 && X[i + 1] != 1 && X[i + 1] != 5){
                ok = 0;
                break;
            }
        } 
    }
    if(ok){
        for(int i = 1; i <= n; i++){
            cout << mp[X[i]] ;
        }
        cout << endl;
    }
}
void slove(int i){
    for(int j = 1; j <= n; j++){
        if(unused[j]){
            X[i] = j;
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
    mp[1] = "A";
    mp[2] = "B";
    mp[3] = "C";
    mp[4] = "D";
    mp[5] = "E";
    mp[6] = "F";
    mp[7] = "G";
    mp[8] = "H";
    memset(unused, 1, sizeof(unused));
    string s;
    cin >> s;
    for(int i = 1; i <= 8; i++){
        if(mp[i] == s){
            n = i;
            break;
        }
    }
    slove(1);
}