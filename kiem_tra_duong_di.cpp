#include<bits/stdc++.h>
using namespace std;
int d, c;
vector<int> adj[1001];
bool visited[1001];

void inp(){
    for(int i = 0; i < 1001; i++) adj[i].clear();
    cin >> d >> c;
    while(c--){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    while(q.size() > 0){
        int v = q.front(); q.pop();
        visited[v] = true;
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void path(){
    memset(visited, false, sizeof(visited));
    int s, t; cin >> s >> t;
    bfs(s);
    if(!visited[t]) cout << "NO";
    else cout << "YES";

}

main(){
    int t; cin >> t;
    while(t--){
        inp();
        int tt; cin >> tt;
        while(tt--){
            path();
            cout << endl;
        }
    }
}