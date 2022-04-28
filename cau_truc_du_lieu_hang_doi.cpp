#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int tt; cin >> tt;
        queue<int> q;
        while(tt--){
            int n; cin >> n;
            if(n == 1){
                cout << q.size();
            }else if(n == 2){
                if(q.empty()) cout << "YES";
                else cout << "NO";
            }else if(n == 3){
                int a; cin >> a;
                q.push(a);
            }else if(n == 4){
                if(!q.empty()) q.pop();
            }else if(n == 5){
                if(q.empty()) cout << -1;
                else cout << q.front();
            }else if(n == 6){
                if(q.empty()) cout << -1;
                else cout << q.back();
            }
            cout << '\n';
        }
    }
}