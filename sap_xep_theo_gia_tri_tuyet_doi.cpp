#include<bits/stdc++.h>
using namespace std;
long long x;
typedef struct{
    int a, b;
}q;
q arr[100005];
bool cmp(q n, q m){
    if(abs(n.a - x) < abs(m.a - x)) return true;
    if(abs(n.a - x) == abs(m.a - x) && n.b < m.b) return true;
    return false;

}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> arr[i].a;
            arr[i].b = i;
        }
        sort(arr, arr + n, cmp);
        for(int i = 0; i < n; i++) cout << arr[i].a << ' ';
        cout << endl;
    }
}