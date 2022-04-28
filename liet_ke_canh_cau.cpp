#include<bits/stdc++.h>
using namespace std;
int d, c;
vector<int> adj[1005];
bool visited[1005];
set<pair<int, int>> dsc;
void inp(){
    for(int i = 0; i <= 1005; i++) adj[i].clear();
    memset(visited, false, sizeof(visited));
    cin >> d >> c;
    while(c--){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        if(x > y) swap(x, y);
        dsc.insert({x, y});
    }
}

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]) dfs(v);
    }
}

void dfs1(int u, int m, int n){
    visited[u] = true;
    for(int v : adj[u]){
        if(v == m && u == n || v == n && u == m) continue;
        if(!visited[v]) dfs1(v, m, n);
    }
}

void canhcau(){
    memset(visited, false, sizeof(visited));
    int tplt = 0;
    for(int i = 1; i <= d; i++){
        if(!visited[i]){
            ++tplt;
            dfs(i);
        }
    }

    for(auto i : dsc){
        memset(visited, false, sizeof(visited));
        int dem = 0;
        int x = i.first, y = i.second;
        for(int j = 1; j <= d; j++){
            if(!visited[j]){
                ++dem;
                dfs1(j, x, y);
            }
        }
        if(dem > tplt) cout << x << ' ' << y << ' ';
    }
}

main(){
    int t; cin >> t;
    while(t--){
        inp();
        canhcau();
        cout << endl;
    }

}