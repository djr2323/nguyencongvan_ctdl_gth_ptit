#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> adj[1001];
bool visited[1001];
int arr[1001][1001];
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                adj[i].push_back(j);
            }
        }
    }
    memset(visited, false, sizeof(visited));
}
void dfs(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
main(){
    inp();
    dfs(1);
}