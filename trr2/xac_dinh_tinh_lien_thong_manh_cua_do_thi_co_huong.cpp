#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1001][1001];
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

int dem = 0;
int bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.size() > 0){
        int v = q.front();
        dem++;
        q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
    return dem;
}

bool xdtlt(){
    for(int j = 1; j <= n; j++){
        memset(visited, false, sizeof(visited));
        dem = 0;
        if(!visited[j]){
            if(bfs(j) != n) return false;
        }
    }
    return true;

}

main(){
    input();
    if(xdtlt()) cout << "strongly connected";
    else cout << "not strongly connected";
}