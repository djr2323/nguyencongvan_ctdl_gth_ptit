#include<bits/stdc++.h>
using namespace std;
main(){
    int ts;
    cin >> ts;
    while(ts--){
        int n, k, dem = 0;
        cin >> n >> k;
        int x[100];
        int y[100];
        int arr[100];
        for(int i = 1; i <= k; i++){
            x[i] = i;
            y[i] = i;
            cin >> arr[i];
        }
        while(1){
            dem++;
            int ok = 1;
            int count = 0;
            for(int i = 1; i <= k; i++){
                if(arr[i] != y[i]) ok = 0;
                if(y[i] == n - k + i) count++;
            }
            if(ok == 1){
                cout << dem << endl;
                break;
            }
            if(count == k) break;
            int t;
            for(int i = k; i >= 1; i++){
                if(y[i] < n - k + i){
                    t = i;
                    break;
                }
            }
            for(int i = 1; i <= k; i++){
                if(i < t){
                    y[i] = x[i];
                }
            }
            y[t] = x[t] + 1;
            for(int i = 1; i <= k; i++){
                if(i > t){
                    y[i] = y[t] + (i - t);
                }
            }
            for(int i = 1; i <= k; i++){
                x[i] = y[i];
                if(x[i] == n - k + i){
                    x[i - 1] += 1;
                    x[i] = x[i - 1] + 1;
                    for(int j = i; j <= k - 1; j++){
                        x[j + 1] = x[j] + 1;
                    }
                    break;
                }
            }
        }
    }
}