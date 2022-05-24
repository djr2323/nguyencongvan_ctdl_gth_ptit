#include<bits/stdc++.h>
using namespace std;

int a[1005][1005], d[1005], truoc[1005], n, s;
set<int> V;

void init(){
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        V.insert(i);
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) a[i][j] = 1000000;
        }
    }
}

void bellman_ford(int s){
    for(int v : V){
        d[v] = a[s][v];
        truoc[v] = s;
    }
    d[s] = 0;
    V.erase(s);
    for(int k = 1; k <= n - 2; k++){
        for(int v : V){
            for(int u : V){
                if(d[v] > d[u] + a[u][v]){
                    d[v] = d[u] + a[u][v];
                    truoc[v] = u;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(s == i) cout << "K/c " << s << " -> " << i << " = " << 0 << ";       " << i << " <- ";
        else if(d[i] == 999989){
            cout << "K/c " << s << " -> " << i << " = " << "INF;\n";
            continue;
        }else cout << "K/c " << s << " -> " << i << " = " << d[i] << ";       " << i << " <- ";
        int tmp = truoc[i];
        while(tmp != s){
            cout << tmp << " <- ";
            tmp = truoc[tmp];
        }
        cout << tmp << endl;
        
    }

}

main(){
    init();
    bellman_ford(s);
}