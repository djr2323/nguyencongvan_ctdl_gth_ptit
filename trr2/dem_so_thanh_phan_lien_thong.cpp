#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int a[1001][1001];
int n;
void dfs(int u){
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int dstplt(){
    int res = 0;
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++res;
            dfs(i);
        }
    }
    return res;
}

main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    cout << dstplt();
}