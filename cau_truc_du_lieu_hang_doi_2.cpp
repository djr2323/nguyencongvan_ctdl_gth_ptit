#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    queue<int> q;
    while(t--){
        string s; cin >> s;
        if(s == "PUSH"){
            int a; cin >> a;
            q.push(a);
        }else if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE";
            else cout << q.front();
        }else if(s == "POP"){
            if(!q.empty()) q.pop(); 
        }
        cout << "\n";
    }
}