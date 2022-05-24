#include<bits/stdc++.h>
using namespace std;
int n, arr[1001][1001];
vector<int> adj[1001];
bool visited[1001];
void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
            if(arr[i][j]) adj[i].push_back(j);
        }
    }
}
void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]) dfs(v);
    }
}
void dinhtru(){
    int tplt = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++tplt;
            dfs(i);
        }
    }
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                ++dem;
                dfs(j);
            }
        }
        if(dem > tplt) cout << i << ' ';
    }
}
main(){
    input();
    dinhtru();
}