#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    deque<int> q;
    while(t--){
        string s; cin >> s;
        int a;
        if(s == "PUSHFRONT"){
            cin >> a;
            q.push_front(a);
        }else if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE";
            else cout << q.front();
        }else if(s == "POPFRONT"){
            if(!q.empty()) q.pop_front();
        }else if(s == "PUSHBACK"){
            cin >> a;
            q.push_back(a);
        }else if(s == "PRINTBACK"){
            if(q.empty()) cout << "NONE";
            else cout << q.back();
        }else if(s == "POPBACK"){
            if(!q.empty()) q.pop_back();
        }
        cout << endl;
    }
}