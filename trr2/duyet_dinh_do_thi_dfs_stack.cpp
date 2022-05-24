#include<bits/stdc++.h>
using namespace std;
bool check[100];
int n;
int a[101][101];
void dfs_stack(int u){
    stack <int> st;
    st.push(u);
    check[u] = true;
    cout << u << ' ';
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int v = 1; v <= n; v++){
            if(a[s][v] && !check[v]){
                cout << v << ' ';
                st.push(s);
                st.push(v);
                check[v] = true;
                break;
            }
        }
    }
}

main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    memset(check, false, sizeof(check));
    dfs_stack(1);
}
