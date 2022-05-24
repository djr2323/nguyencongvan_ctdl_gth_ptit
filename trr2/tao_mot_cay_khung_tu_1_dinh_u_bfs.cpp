#include<bits/stdc++.h>
using namespace std;
int n, vt;
int a[1001][1001];
int visited[1001];
int visitedd[1001];
vector<int> adj[1001];
queue<pair<int, int> > res;
queue<pair<int, int> > ress;

void init(){
    cin >> n >> vt;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    memset(visitedd, 0, sizeof(visitedd));
}

void tree_dfs(int u){
    visited[u] = 1;
    for(auto v : adj[u]){
        if(!visited[v]){
            res.push({u, v});
            tree_dfs(v);
        }
    }
}

void tree_bfs(int u){
    queue<int> q;
    q.push(u);
    visitedd[u] = 1;
    while(q.size() > 0){
        int v = q.front(); q.pop();
        for(auto x : adj[v]){
            if(!visitedd[x]){
                ress.push({v, x});
                q.push(x);
                visitedd[x] = 1;
            }
        }
    }
}

main(){
    init();

    tree_dfs(vt);
    cout << "DFS tree" << endl;
    while(res.size() > 0){
        pair<int, int> tmp;
        tmp = res.front(); res.pop();
        cout << tmp.first << ' ' << tmp.second << '\n';
    }
    
    tree_bfs(vt);
    cout << "BFS tree" << endl;
    while(ress.size() > 0){
        pair<int, int> tmp;
        tmp = ress.front(); ress.pop();
        cout << tmp.first << ' ' << tmp.second << endl;
    }

}