#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> res;
        while(n--){
            string s;
            cin >> s;
            for(int i = 0; i < s.length(); i++){
                res.insert(int(s[i] - '0'));
            }
        }
        for(int x : res){
            cout << x << ' ';
        }
        cout << '\n';
    }
}