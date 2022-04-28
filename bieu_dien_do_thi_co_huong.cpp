#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int d, c; cin >> d >> c;
        vector<int> adj[100005];
        while(c--){
            int i, j; cin >> i >> j;
            adj[i].push_back(j);
        }
        for(int i = 1; i <= d; i++){
            cout << i << ": ";
            for(int j = 0; j < adj[i].size(); j++){
                cout << adj[i][j] << ' ';
            }
            cout << endl;
        }
    }
}