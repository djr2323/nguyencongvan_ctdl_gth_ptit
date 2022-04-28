#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* arr = new int[n + 1];
        int dem = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(!arr[i]) dem++;
        }
        cout << dem << endl;
       
        
    }
}