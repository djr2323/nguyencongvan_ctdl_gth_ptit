#include<bits/stdc++.h>
using namespace std;
int d, c , s, t;
vector<int> adj[1001];
bool visited[1001];
int trv[1001];

void inp(){
    for(int i = 0; i <= 1001; i++) adj[i].clear();
    memset(visited, false, sizeof(visited));
    cin >> d >> c >> s >> t;
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
        visited[v] = true;
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                trv[x] = v;
            }
        }
    }
}

void path(){
    bfs(s);
    if(!visited[t]) cout << -1;
    else{
        vector<int> res;
        while(t != s){
            res.push_back(t);
            t = trv[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++) cout << res[i] << ' ';
    }
}

main(){
    int tt; cin >> tt;
    while(tt--){
        inp();
        path();
        cout << endl;
    }

}