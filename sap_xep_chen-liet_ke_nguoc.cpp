#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    vector<int> ans;
    vector<vector<int> > res;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        ans.push_back(a[i]);
        sort(ans.begin(), ans.end());
        res.push_back(ans);
    }
    for(int i = res.size() - 1; i >= 0; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
}