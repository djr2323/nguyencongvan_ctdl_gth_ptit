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
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << ' ';
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }

}
main(){
    inp();
    bfs(1);

}