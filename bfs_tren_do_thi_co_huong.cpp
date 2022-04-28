#include<bits/stdc++.h>
using namespace std;
int d, c, vt;
vector<int> adj[1005];
bool visited[1005];

void inp(){
    for(int i = 0; i <= 1005; i++) adj[i].clear();
    memset(visited, 0, sizeof(visited));
    cin >> d >> c >> vt;
    while(c--){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    while(q.size() > 0){
        int v = q.front(); q.pop();
        cout << v << ' ';
        visited[v] = true;
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

main(){
    int t; cin >> t;
    while(t--){
        inp();
        bfs(vt);
        cout << endl;
    }


}