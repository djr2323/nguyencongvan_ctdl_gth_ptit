#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int> > res(n + 1);
        for(int i = 0; i < n; i++) cin >> res[i].first;
        for(int i = 0; i < n; i++) cin >> res[i].second;
        sort(res.begin(), res.end(), cmp);
        int dem = 0, id = 0;
        for(int i = 1; i < res.size(); i++){
            if(res[id].second <= res[i].first){
                dem++;
                id = i;
            }
        }
        cout << dem << endl;

    }
}