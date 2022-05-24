#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1001][1001];
vector<int> adj[1001];
bool visited[1001];
set<pair<int, int> > dsc;

void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
            if(arr[i][j]){
                adj[i].push_back(j);
                int x = i, y = j;
                if(i > j) swap(x, y);
                dsc.insert({x, y});
            }
        }
    }
}

void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]) dfs(v);
    }
}

void dfs1(int u, int x, int y){
    visited[u] = true;
    for(int v : adj[u]){
        if(v == x && u == y || v == y && u == x) continue;
        if(!visited[v]) dfs1(v, x, y);
    }
}

void canhcau(){
    int tplt = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++tplt;
            dfs(i);
        }
    }
    for(auto it : dsc){
        int dem = 0;
        memset(visited, false, sizeof(visited));
        int x = it.first, y = it.second;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                ++dem;
                dfs1(i, x, y);
            }
        }
        if(dem > tplt){
            cout << x << ' ' << y << endl;
        }
    }

}
main(){
    input();
    canhcau();
}