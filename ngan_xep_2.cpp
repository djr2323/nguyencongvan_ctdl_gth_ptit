#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    vector<int> res;
    string s; 
    int a;
    while(t--){
        cin >> s;
        if(s == "PUSH"){
            cin >> a;
            res.push_back(a);
        }else if(s == "PRINT"){
            int len = res.size();
            if(len > 0) cout << res[len - 1];
            else  cout << "NONE";
            cout << endl;
        }else if(s == "POP"){
            if(res.size() > 0) res.pop_back();
        }

    }
}