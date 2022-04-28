#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a, b;
ll mp[1000000];
main(){
    a = b = 1;
    for(int i = 0; i < 26; i++){
        b = a;
        a = 2*a + 1;
        mp[i] = b;
    }
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            int t = i;
            if(k <= mp[i]){
                while(k != mp[i]/2 + 1){
                    if(k >= mp[i]/2 + 1){
                        k = k - mp[i]/2 - 1;
                    }
                    i--;
                }
                cout << s[i] << endl;
                break;
            }
        }

            
    }

}