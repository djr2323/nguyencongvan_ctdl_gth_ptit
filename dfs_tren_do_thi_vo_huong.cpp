#include<bits/stdc++.h>
using namespace std;
int d, c, vt;
vector<int> adj[1005];
bool visited[1005];

void inp(){
    for(int i = 0; i < 1005; i++) adj[i].clear();
    memset(visited, false, sizeof(visited));
    cin >> d >> c >> vt;
    while(c--){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void dfs(int u){
    visited[u] = true;
    cout << u << ' ';
    for(int x : adj[u]){
        if(!visited[x]) dfs(x);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        inp();
        dfs(vt);
        cout << endl;
    }
}