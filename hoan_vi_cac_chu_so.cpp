#include<bits/stdc++.h>
using namespace std;
int m, n;
string s[100];
int x[10];
bool ok[10];
int res = INT_MAX;
void init(){
    int ma = INT_MIN, mi = INT_MAX;
    for(int i = 1; i <= m; i++){
        int number = 0;
        for(int j = 1; j < s[i].length(); j++){
            number = number*10 + int(s[i][x[j]] - '0');
        }
        ma = max(ma, number);
        mi = min(mi, number);
    }
    res = min(res, ma - mi);
}
void Try(int id){
    for(int i = 1; i <= n; i++){
        if(!ok[i]){
            ok[i] = true;
            x[id] = i;
            if(id == n){
                init();
            }else Try(id + 1);
            ok[i] = false;

        }
    }
}
main(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        cin >> s[i];
        s[i] = '*' + s[i];
    }
    Try(1);
    cout << res;
}