#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1006];

void inp(){
    for(int i = 0; i < 1006; i++) adj[i].clear();
    cin >> n >> m;
    int t = m;
    while(t--){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void outp(){
    for(int i= 1; i <= n; i++){
        cout << i << ':' << ' ';
        for(auto x : adj[i]){
            cout << x << ' ';
        }
        cout << '\n';
    }
}

main(){
    int t; cin >> t;
    while(t--){
        inp();
        outp();
    }
}