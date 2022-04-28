#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; i++) cout << arr[i] << ' ';
        cout << endl;
    }

}