#include<bits/stdc++.h>
using namespace std;
int a = 100;
int comp(int x, int y){
    if(x == a || y == a) return 0;
}
main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n, dem = 0;
        cin >> n;
        int x[100];
        int y[100];
        int arr[100];
        for(int i = 1; i <= n; i++){
            x[i] = i;
            y[i] = i;
            cin >> arr[i];
        }
        while(1){
            dem++;
            int ok = 1;
            for(int i = 1; i <= n; i++){
                if(arr[i] != y[i]) ok = 0;
            }
            if(ok == 1){
                cout << dem << endl;
                break;
            }
            int count = 0;
            for(int i = 1; i <= n; i++){
                if(y[i] == n - i + 1) count++;
            }
            if(count == n) break;
            int t;
            for(int i = n; i >= 1; i--){
                if(x[i - 1] < x[i]){
                    t = i;
                    break;
                }
            }
            for(int i = 1; i <= n; i++){
                if(i <= t - 2){
                    y[i] = x[i];
                }
            }
            int id = 0;
            for(int i = t; i <= n; i++){
                if(x[i] < a && x[i] > x[t - 1]){
                    a = x[i];
                    id = i;
                }
            }
            if(a != 100){
                swap(y[t - 1], y[id]);
                sort(y + t, y + n + 1);
            }
            a = 100;
            for(int i = 1; i <= n; i++) x[i] = y[i];
        }
    }
}

