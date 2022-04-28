#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int res = 0;
        while(s.length()){
            int x = s.find("()");
            if(x == -1){
                if(s[0] == ')') 
                    res++; 
                    s[0] = '(';
                if(s[s.size() - 1] == '(') 
                    res++; 
                    s[s.size() - 1] = ')';
            }else{
                s.erase(x, 2);
            }
        }
        cout << res << endl;
    }
}