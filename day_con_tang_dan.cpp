#include<bits/stdc++.h>
using namespace std;
string numberToString(unsigned int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}
vector<vector<int> > v;
vector<int> vv;
vector<string> kq;
main(){
    int n;
    cin >> n;
    int res[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> res[i];
    }
    int x[21] = {0};
    int y[21] = {0};
    while(1){
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(!x[i]) ok = 0;
        }
        int a = 0, b = 0;
        int kt = 1;
        for(int i = 1; i <= n; i++){
            if(x[i]){
                vv.push_back(res[i]);
            }
            
        }
        for(int i = 1; i <= n; i++){
            if(x[i]){
                a = res[i];
                if(b > a && b*a != 0){
                    kt = 0;
                    break;
                }
                b = res[i];
            }
        }
        a = 0;
        b = 0;
        if(kt == 1 && vv.size() > 1){
            v.push_back(vv);
        }
        vv.clear();
        if(ok == 1) break;
        for(int i = n; i >= 1; i--){
            if(x[i] == 0){
                y[i] = 1;
                for(int j = i + 1; j <= n; j++){
                    y[j] = 0;
                }
                break;
            }
        }
        for(int i = 1; i <= n; i++){
            x[i] = y[i];
        }
    }
    for(int i = 0; i < v.size(); i++){
        string s = "";
        for(int j = 0; j < v[i].size(); j++){
            s += numberToString(v[i][j]);
            s += ' ';
        }
        kq.push_back(s);
    }
    sort(kq.begin(), kq.end());
    for(int i = 0; i < kq.size(); i++){
        
        cout << kq[i] << endl;
    }
}