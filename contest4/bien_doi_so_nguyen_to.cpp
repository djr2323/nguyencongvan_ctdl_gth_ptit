#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sngt;
vector<ll> adj[10005];
bool visited[10005];
int dem[10005];

void sang(){
    int ok[10000] = {0};
    for(int i = 2; i <= 9999; i++){
        for(int j = i*i; j <= 9999; j += i){
            ok[j] = 1;
        }
    }
    for(int i = 1000; i <= 9999; i++){
        if(!ok[i]) sngt.push_back(i);
    }
}

bool check(ll a, ll b){
    int d = 0;
    while(a && b){
        if(a%10 != b%10) ++d;
        a /= 10; b/= 10;
    }
    return d == 1;
}

void inp(){
    for(int i = 0; i < sngt.size(); i++){
        for(int j = 0; j < sngt.size(); j++){
            if(check(sngt[i], sngt[j])){
                adj[sngt[i]].push_back(sngt[j]);
                adj[sngt[j]].push_back(sngt[i]);
            }
        }
    }
}

int bfs(ll u, ll goal){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    dem[u] = 0;
    while(q.size() > 0){
        u = q.front(); q.pop();
        if(u == goal) return dem[goal];
        for(auto x : adj[u]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                dem[x] = dem[u] + 1;
            }
        }
    }

}



main(){
    sang();
    inp();
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        dem[10005] = {0};
        memset(visited, false, sizeof(visited));
        cout << bfs(a, b) << endl;
    }
}