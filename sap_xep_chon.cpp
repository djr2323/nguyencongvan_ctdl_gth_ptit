#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++){
        int id = i + 1;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[id]){
                id = j;
            }
        }
        if(a[i] > a[id]) swap(a[i], a[id]);
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++) cout << a[j] << ' ';
        cout << "\n";
    }
}