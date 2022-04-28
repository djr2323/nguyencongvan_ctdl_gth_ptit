#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        vector<int> adj;
        for(int j = 1; j <= n; j++){
            int a;
            cin >> a;
            if(a) adj.push_back(j);
        }
        for(int j = 0; j < adj.size(); j++){
            cout << adj[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}