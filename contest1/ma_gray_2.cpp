#include<bits/stdc++.h>
using namespace std;
main(){
   int t;
   cin >> t;
   while(t--){
    string s;
    cin >> s;
    string ss;
    ss = s;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == '1'){
            if(ss[i - 1] == '1') ss[i] = '0';
            else ss[i] == '0';
        }else{
            if(ss[i - 1] == '1') ss[i] = '1';
            else ss[i] == '0';
        }
    }
    cout << ss;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
}