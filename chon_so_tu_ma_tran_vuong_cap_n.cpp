#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[105][105];
int x[105];
int unused[105];
vector<vector<int> > res;
void slove(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i][x[i]];
    }
    if(sum == k){
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            ans.push_back(x[i]);
        }
        res.push_back(ans);
    }
}

void Try(int id){
    for(int i = 1; i <= n; i++){
        if(unused[i]){
            unused[i] = 0;
            x[id] = i;
            if(id == n){
                slove();
            }else{
                Try(id + 1);
            }
            unused[i] = 1;

        }
    }
}
main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    memset(unused, 1, sizeof(unused));
    Try(1);
    cout << res.size()<< endl;
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

}