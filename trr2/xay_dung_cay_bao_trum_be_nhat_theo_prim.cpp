#include<bits/stdc++.h>
using namespace std;

struct egde{
    int u, v;
    int w;
};
int n, posi;
int a[1001][1001];
vector<egde> canh, T;
set<int> VH, V;

void inp(){
    cin >> n >> posi;
    for(int i = 1; i <= n; i++){
        V.insert(i);
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] > 0){
                egde e;
                e.u = i; e.v = j; e.w = a[i][j];
                canh.push_back(e);
            }
        }
    }
}

bool cmp(egde a, egde b){
    if(a.w == b.w){
        if(a.u == b.u){
            return a.v < b.v;
        }else return a.u < b.u;
    }else return a.w < b.w;
}

void prim(int s){
    VH.insert(s);
    V.erase(s);
    int d = 0;
    sort(canh.begin(), canh.end(), cmp);
    while(V.size() > 0){
        int ok = 1;
        egde ans;
        for(int i = 0; i < canh.size(); i++){
            if(VH.find(canh[i].u) != VH.end() && V.find(canh[i].v) != V.end()){
                ans = canh[i];
                ok = 0;
                break;
            }
        }
        if(ok) return;
        T.push_back(ans);
        d += ans.w;
        VH.insert(ans.v);
        V.erase(ans.v);
    }
    cout << "dH = " << d << endl;
    for(int i = 0; i < T.size(); i++){
        if(T[i].u > T[i].v)  swap(T[i].u, T[i].v);
    }
    //sort(T.begin(), T.end(), cmp);
    for(int i = 0; i < T.size(); i++){
        cout << T[i].u << ' ' << T[i].v << endl;
    }
}

main(){
    inp();
    prim(posi);
}