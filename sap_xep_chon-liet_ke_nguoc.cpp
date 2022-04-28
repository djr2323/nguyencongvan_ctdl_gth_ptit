#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    vector<int> res[1001];
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++){
        int id = i + 1;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[id]){
                id = j;
            }
        }
        if(a[i] > a[id]) swap(a[i], a[id]);
        for(int j = 0; j < n; j++){
            res[i].push_back(a[j]);
        }
    }
    for(int k = n - 2; k >= 0; k--){
        cout << "Buoc " << k + 1 << ": ";
        for(int j = 0; j < res[k].size(); j++){
            cout << res[k][j] << ' ';
        }
        cout << endl;
    }
}