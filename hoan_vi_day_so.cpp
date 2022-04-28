#include<bits/stdc++.h>
using namespace std;
int a = 10001;
main(){
    int n;
    cin >> n;
    int x[9];
    int y[9];
    int arr[9];
    for(int i = 1; i <= n; i++){
        x[i] = i;
        y[i] = i;
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    while(1){
        int dem = 0;
        for(int i = 1; i <= n; i++){
            if(y[i] == n - i + 1) dem++;
            cout << arr[y[i]] << ' ';
        }
        if(dem == n) break;
        cout << endl;
        int t;
        for(int i = n; i >= 1; i--){
            if(x[i - 1] < x[i]){
                t = i;
                break;
            }
        }
        for(int i = 1; i <= n; i++){
            if(i <= t - 2) y[i] = x[i];
        }
        int id;
        for(int i = t; i <= n; i++){
            if(x[i] < a && x[i] > x[t - 1]){
                a = x[i];
                id = i;
            }
        }
        if(a != 10001){
            swap(y[t -1], y[id]);
            sort(y + t, y + n + 1);
        }
        a = 10001;
        for(int i = 1; i <= n; i++) x[i] = y[i];
    }
}