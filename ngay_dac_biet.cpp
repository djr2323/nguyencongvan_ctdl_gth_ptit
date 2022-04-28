#include<bits/stdc++.h>
using namespace std;
main(){
    string s[1000];
    int n = 8, dem = 0;
    int x[100] = {0};
    int y[100] = {0};
    while(1){
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(!y[i]) ok = 0;
        }
        for(int i = 1; i <= n; i++){
            if(!y[i]) s[dem] += 2 + 48;
            else s[dem] += 0 + 48; 
            if(s[dem].length() == 2 || s[dem].length() == 5) s[dem] += '/';
        }
        dem++;
        if(ok == 1) break;
        for(int i = n; i >= 1; i--){
            if(!x[i]){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++){
                    y[j] = 0;
                }
                break;
            }
        }
        for(int i = 1; i <= n; i++){
            x[i] = y[i];
        }
    }
    sort(s, s + dem);
    for(int i = 0; i < dem; i++){
        if(s[i][4] - s[i][3] == 2 && s[i][0] + s[i][1] - 2*48 != 0 && s[i][6] - 48 == 2){
            cout << s[i] << endl;
        }
    }
}