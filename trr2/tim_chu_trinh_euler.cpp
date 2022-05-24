#include<bits/stdc++.h>
using namespace std;
int n, vt, a[1001][1001];
void inp(){
    cin >> n >> vt;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void chtr_euler(int u){
    stack<int> st, CE;
    st.push(u);
    while(!st.empty()){
        int s = st.top();
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(!a[s][i]) count++;
        }
        if(count != n){
            for(int i = 1; i <= n; i++){
                if(a[s][i]){
                    st.push(i);
                    a[s][i] = a[i][s] = 0;
                    break;
                }
            }
        }else{
            CE.push(s);
            st.pop();
        }
    }
    while(!CE.empty()){
        cout << CE.top() << ' ';
        CE.pop();
    }
}

main(){
    inp();
    chtr_euler(vt);
}
