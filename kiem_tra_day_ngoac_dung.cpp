#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        bool ok = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }else if(s[i] == '}'){
                if(st.size() == 0){
                    ok = false;
                    break;
                }else if(st.top() == '{') st.pop();
            }else if(s[i] == ']'){
                if(st.size() == 0){
                    ok = false;
                    break;
                }else if(st.top() == '[') st.pop();
            }else if(s[i] == ']'){
                if(st.size() == 0){
                    ok = false;
                    break;
                }else if(st.top() == '[') st.pop();
            }else if(s[i] == ')'){
                if(st.size() == 0){
                    ok = false;
                    break;
                }else if(st.top() == '(') st.pop();
            }
        }
        if(st.size() > 0) ok = false;
        if(ok) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}