#include<bits/stdc++.h>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; int a;
    vector<int> res;
    while(cin >> s){
        if(s == "push"){
            cin >> a;
            res.push_back(a);
        }
        if(s == "pop"){
            if(res.size() > 0) res.pop_back();
        }
        if(s == "show"){
            if(res.size() > 0){
                for(int i = 0; i < res.size(); i++) cout << res[i] << ' ';
            }else{
                cout << "empty";
            }
            cout << endl;
        }

    }

}