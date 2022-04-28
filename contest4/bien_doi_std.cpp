#include<bits/stdc++.h>
using namespace std;

int res(int a, int b){
    set<int> s;
    queue<pair<int, int> > q;
    q.push({a, 0});
    while(q.size() > 0){
        pair<int, int> tmp = q.front(); q.pop();
        
        if(tmp.first == b) return tmp.second;
        if(tmp.first*2 == b || tmp.first - 1 == b) return tmp.second + 1;

        if(tmp.first < b && s.find(tmp.first*2) == s.end()){
            q.push({tmp.first*2, tmp.second + 1});
            s.insert(tmp.first*2);
        }
        if(tmp.first - 1 > 0 && s.find(tmp.first - 1) == s.end()){
            q.push({tmp.first - 1, tmp.second + 1});
            s.insert(tmp.first - 1);
        }

    }
}

main(){
    int t; cin >> t;
    while(t--){
        int s, t; cin >> s >> t;
        cout << res(s, t) << endl;
    }
}