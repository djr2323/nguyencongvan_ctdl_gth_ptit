#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> res;
    for(int i = 0; i < n; i++){
        res.push_back(a[i]);
        sort(res.begin(), res.end());
        cout << "Buoc " << i << ": ";
        for(int i = 0; i < res.size(); i++) cout << res[i] << ' ';
        cout << endl;
    }


}