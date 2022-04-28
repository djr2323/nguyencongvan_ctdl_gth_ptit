#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<vector<int> > res;
        for(int i = 0; i < n; i++){
            int dem = 0;
            for(int j = 0; j < n - 1; j++){
                if(a[j] > a[j + 1]){
                    dem++;
                    swap(a[j], a[j + 1]);
                }
            }
            if(dem){
                vector<int> x;
                for(int j = 0; j < n; j++){
                    x.push_back(a[j]);
                }
                res.push_back(x);
            }
        }
        for(int i = res.size() - 1; i >= 0; i--){
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j] << ' ';
            }
            cout << endl;
        }
    }
}