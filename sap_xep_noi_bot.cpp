#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int id = 1;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]){
                dem++;
                swap(a[j], a[j + 1]);
            }
        }
        if(dem){
            cout << "Buoc " << id++ << ": ";
            for(int j = 0; j < n; j++){
                cout << a[j] << ' ';
            }
            cout << endl;
        }
    }
}