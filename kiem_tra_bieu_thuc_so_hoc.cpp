#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
//        cout << s << endl;
       bool ok;
       stack<char> res;
       for(int i = 0; i < s.size(); i++){
           if(s[i] == ')'){
               ok = true;
               char top = res.top(); res.pop();
               while(top != '('){
                   if(top == '+' || top == '-' || top == '*' || top == '/'){
                       ok = false;
                   }
                   top = res.top(); res.pop();
               }
               if(ok) break;
           }else res.push(s[i]);
       }
       if(ok) cout << "Yes";
       else cout << "No";
       cout << endl;
    }
}