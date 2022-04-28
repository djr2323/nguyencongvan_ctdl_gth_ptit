#include<bits/stdc++.h>
using namespace std;
main(){
    int n, k;
    string str;
    set<string> s;
    set<string>:: iterator it;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> str;
        s.insert(str);
    }
    int x[30] = {0};
    int y[30] = {0};
    vector<vector<string> > ss;
    while(1){
        int count = 0;
        for(int i = 1; i <= s.size(); i++){
            if(y[i]) count++;
        }
        if(count == k){
            vector<string> sss;
            int i;
            for(it = s.begin(), i = 1; it != s.end(),  i <= s.size(); it++, i++){
                if(y[i]){
                    sss.push_back(*it);
                }
            }
            sort(sss.begin(), sss.end());
            ss.push_back(sss);
            sss.clear();
        }
        if(count == s.size()) break;
        for(int i = s.size(); i >= 1; i--){
            if(!x[i]){
                y[i] = 1;
                for(int j = i + 1; j <= s.size(); j++){
                    y[j] = 0;
                }
                break;
            }
        }
        for(int i = 1; i <= s.size(); i++){
            x[i] = y[i];
        }
    }
    sort(ss.begin(), ss.end());
    for(int i = 0; i < ss.size(); i++){
        for(int j = 0; j < ss[i].size(); j++){
            cout << ss[i][j] << ' ';
        }
        cout << endl;
    }

}
