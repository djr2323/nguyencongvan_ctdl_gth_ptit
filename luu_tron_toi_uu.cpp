#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int begin;
    int end;
}lctu;
bool cmp(lctu a, lctu b){
    if(a.end < b.end) return true;
    else return false;
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        lctu a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].begin >> a[i].end;
        }
        sort(a, a + n, cmp);
        int dem = 1, id = 0;
        for(int i = 1; i < n; i++){
             if(a[id].end <= a[i].begin){
                 dem++;
                 id = i;
             }
        }
        cout << dem << endl;
    }

}