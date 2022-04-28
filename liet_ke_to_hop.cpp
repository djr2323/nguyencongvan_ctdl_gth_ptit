#include<bits/stdc++.h>
using namespace std;
main(){
    int n, k;
    cin >> n >> k;
    int x[100];
    int y[100];
    int arr[100];
    set<int> arr1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr1.insert(a);
    }
    n = arr1.size();
    set<int>:: iterator it;
    int dem = 1;
    for(it = arr1.begin(); it != arr1.end(); it++){
        arr[dem] = *it;
        dem++;
    }
    for(int i = 1; i <= k; i++){
        x[i] = i;
        y[i] = i;
    }
    while(1){
        int count = 0;
        for(int i = 1; i <= k; i++){
            if(y[i] == n - k + i) count++;
            cout << arr[y[i]] << ' ';
        }
        if(count == k) break;
        cout << endl;
        int t;
        for(int i = k; ; i++){
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