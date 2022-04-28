#include<bits/stdc++.h>
using namespace std;
string slove(int n){
    queue<string> q;
    q.push("9");
    while(q.size() > 0){
        string s = q.front(); q.pop();
        long long tmp = 0;
        for(int i = 0; i < s.size(); i++){
            tmp = 10*tmp + (int)(s[i] - '0');
            tmp%=n;
        }
        if(!tmp) return s;
        q.push(s + "0");
        q.push(s + "9");
    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << slove(n) << endl;
    }
}