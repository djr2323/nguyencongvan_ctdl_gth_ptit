#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(i == 0) cout << s[i];
            else{
                if(s[i - 1] != s[i]){
                    cout << 1;
                    s[i] = '1';
                }
                else{
                    cout << 0;
                    s[i] = '0';
                }
            }
        }
        cout << '\n';
    }
}