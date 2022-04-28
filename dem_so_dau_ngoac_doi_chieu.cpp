#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        int res = 0;
        if(s[0] == ')') res++, s[0] = '(';
        if(s[s.size() - 1] == '(') res++, s[s.size() - 1] = ')';
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else if(!st.empty() && st.top() == '(') st.pop();
            else if(!st.empty() && st.top() == ')') res++, st.pop();
            else if(st.empty()) res++, st.push('(');
        }
        if(!st.empty()) res += st.size()/2;
        cout << res << endl;

    }
}