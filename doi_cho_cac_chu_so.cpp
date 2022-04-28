#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        for(int i = 0; i < s.size(); i++){
            char ma = '0';
            int pos = 0;
            for(int j = i + 1; j < s.size() && k > 0; j++){
                if(ma <= s[j]){
                    ma = s[j];
                    pos = j;
                }
            }
            if(ma > s[i] && k > 0){
                swap(s[i], s[pos]);
                --k;
            }
        }
        cout << s << '\n';

    }
}