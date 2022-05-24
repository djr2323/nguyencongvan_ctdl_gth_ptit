#include<bits/stdc++.h>
using namespace std;

struct edge{
    int u,  v;
    int w;
};

const int maxx = 1001;
int n;
int a[maxx][maxx];
int parent[maxx], sz[maxx];
vector<edge> canh;

void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] > 0){
                int x = i, y = j;
                if(x > y) swap(x, y);
                edge e;
                e.u = x; e.v= y; e.w = a[x][y];
                canh.push_back(e);
            }
        }
    }
}

void make_set(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}


bool cmp1(edge a, edge b){
   return a.v < b.v;
}
bool cmp2(edge a, edge b){
    return a.u < b.u;
}
bool cmp3(edge a, edge b){
    if(a.w == b.w){
        if(a.u == b.u){
            return a.v < b.v;
        }else return a.u < b.u;
    }else return a.w < b.w;
}

void kruskal(){
    vector<edge> res;
    int d = 0;
    sort(canh.begin(), canh.end(), cmp1);
    sort(canh.begin(), canh.end(), cmp3);
    for(int i = 0; i < canh.size(); i++){
        if(res.size() == canh.size() - 1) break;
        edge e = canh[i];
        if(Union(e.u, e.v)){
            res.push_back(e);
            d += e.w;
        }
    }

    if(res.size() != n - 1) cout << -1;
    else{
        cout << "dH = " << d << '\n';
        for(auto it : res){
            cout << it.u << ' ' << it.v << ' ' << '\n';
        }
    }

}

main(){
    init();
    make_set();
    kruskal();
}



