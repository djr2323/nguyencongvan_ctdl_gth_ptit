#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        int ma;
        bool kt = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > 0) kt = true;
            if(i == 0) ma = a[0];
            else{
                if(ma < a[i]) ma = a[i];
            }
        }
        if(!kt) cout << ma;
        else{
            int sum = 0;
            for(int i = 0; i < n; i++){
                if(sum + a[i] < 0){
                    sum = 0;
                    continue;
                }
                sum += a[i];
                if(ma < sum) ma = sum;
            }
            cout << ma;
        }
        cout << '\n';
    }

}