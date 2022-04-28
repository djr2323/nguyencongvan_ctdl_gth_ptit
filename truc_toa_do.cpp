#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int a;
    int b;
}dth;
int cmp(dth s1, dth s2){
    return s1.b < s2.b;
}
dth c[100005];
void slove(int n){
    int id = 0;
    int res = 1;
    for(int i = 1; i < n; i++){
        if(c[i].a >= c[id].b){
            res++;
            id = i;
        }
    }
    cout << res << endl;
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> c[i].a >> c[i].b;
        sort(c, c + n, cmp);
        slove(n);
    }
}
