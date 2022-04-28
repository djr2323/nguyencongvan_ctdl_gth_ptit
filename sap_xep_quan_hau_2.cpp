#include<bits/stdc++.h>
using namespace std;
bool row[10], column[10], down[20], rever[20];
int a[10][10];
int b[10];
int res;
void init(){
    res = 0;
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            cin >> a[i][j];
        }
    }
    memset((row, column, down, rever), false, (sizeof(row), sizeof(column), sizeof(down), sizeof(rever)));

}
void Try(int i){
   for(int j = 1; j <= 8; j++){
       if(!row[j] && !column[j] && !down[i + j - 1] && !rever[i - j + 8]){
           b[i] = j;
           row[j] = column[j] = down[i + j - 1] = rever[i - j + 8] = true;
           if(i == 8){
               int ans = 0;
               for(int l = 1; l <= 8; l++){
                   ans += a[l][b[l]];
               }
               res = max(res, ans);
           }else Try(i + 1);
           row[j] = column[j] = down[i + j - 1] = rever[i - j + 8] = false;

       }


   }
}


main(){
    int t; cin >> t;
    while(t--){
        init();
        Try(1);
        cout << res << endl;
    }

    
}