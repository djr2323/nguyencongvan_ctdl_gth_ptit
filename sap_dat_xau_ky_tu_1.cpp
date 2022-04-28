#include<bits/stdc++.h>
using namespace std;
main(){
      int t;
      cin >> t;
      while(t--){
            string s;
            cin >> s;
            int a[123] = {0};
            int len = s.length();
            for(int i = 0; i < len; i++){
                  a[int(s[i])]++;
            }
            bool check = true;
            for(int i = 97; i < 123; i++){
                  if(a[i] != 0){
                        if(a[i] > len - a[i] + 1){
                              check = false;
                              break;
                        }
                  }
            }
            if(check){
                  cout << 1;
            }else{
                  cout << -1;
            }
            cout << endl;
     
      }
}