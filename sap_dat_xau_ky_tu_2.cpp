#include<bits/stdc++.h>
using namespace std;
main(){
      int t;
      cin >> t;
      while(t--){
            int n;
            string s;
            cin >> n >> s;
            int len = s.length();
            int a[300] = {0};
            int ma = 0;
            for(int i = 0; i < len; i++){
                  a[int(s[i])]++;
                  if(ma < a[int(s[i])]) ma = a[int(s[i])];
            }
            if((ma - 1)*(n - 1) > len - ma) cout << -1;
            else cout << 1;
            cout << endl;
      }
}