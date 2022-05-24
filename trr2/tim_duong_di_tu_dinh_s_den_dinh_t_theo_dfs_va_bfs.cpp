#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int a[1001][1001];
int parent[1001];
void dfs(int u){
    visited[u] = true;
    for(auto x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            dfs(x);
        }
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.size() > 0){
        int v = q.front();
        q.pop();
        for(auto x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
}

void Phathdfs(int s, int t){
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if(!visited[t]){
        cout << "no path";
    }else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        for(auto x : path){
            cout << x << ' ';
        }
    }
}

void Phathbfs(int s, int t){
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    bfs(s);
    if(!visited[t]){
        cout << "no path";
    }else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        for(auto x : path){
            cout << x << ' ';
        }
    }
}
main(){
    int n, s, t;
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    cout << "DFS path: ";
    Phathdfs(s, t);
    cout << endl;
    cout << "BFS path: ";
    Phathbfs(s, t);
}