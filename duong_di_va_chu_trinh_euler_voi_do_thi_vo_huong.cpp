#include<bits/stdc++.h>
using namespace std;
int d, c;
vector<int> ke[1001];

void inp(){
    cin >> d >> c;
    while(c--){
         int x, y; cin >> x >> y;
         ke[x].push_back(y);
         ke[y].push_back(x);
    } 
}
main(){
    int t; cin >> t;
    while(t--){
        inp();
        int ch = 0, le = 0;
        for(int i = 1; i <= d; i++){
            if(ke[i].size()%2) le++;
            else ch++;
        }
        if(le == 2) cout << 1;
        else if(ch == d) cout << 2;
        else cout << 0;
        cout << endl;
    }
    
}
