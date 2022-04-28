#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[1005];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int k, res = 0;
        for(int i = 0; i < n - 1; i++){
            k = i;
            for(int j = i + 1; j < n; j++){
                if(arr[k] > arr[j]){
                    k = j;
                }
            }
            if(k != i){
                res++;
            }
            swap(arr[i], arr[k]);
        }
        cout << res << endl;
    }
}