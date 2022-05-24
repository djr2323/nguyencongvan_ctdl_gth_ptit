#include<bits/stdc++.h>
using namespace std;

int d[1005], a[1005][1005], truoc[1005], n, s;
set<int> T, V;

void init(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        T.insert(i);
        V.insert(i);
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) a[i][j] = 1000000;
        }
    }
}

void Dijkstra(int s){
    d[s] = 0;
    T.erase(s);
    for(int v : V){
        d[v] = a[s][v];
        truoc[v] = s;
    }
    while(T.size() > 0){
        int mi = INT_MAX;
        int u;
        for(int x : T){
            if(d[x] < mi){
                mi = d[x];
                u = x;
            }
        }
        T.erase(u);
        for(int v : T){
            if(d[v] > d[u] + a[u][v]){
                d[v] = d[u] + a[u][v];
                truoc[v] = u;
            }
        }
        
    }
    for(int i = 1; i <= n; i++){
        if(i != 1) cout << "K/c " << s << " -> " << i << " = " << d[i] << ";     ";
        else cout << "K/c " << s << " -> " << i << " = " << 0 << ";     ";
        int tmp = truoc[i];
        cout << i << " <- ";
        while(tmp != s){
            cout << tmp << " <- ";
            tmp = truoc[tmp];
        }
        cout << tmp << endl;
    }

}



main(){
    init();
    Dijkstra(s);
}