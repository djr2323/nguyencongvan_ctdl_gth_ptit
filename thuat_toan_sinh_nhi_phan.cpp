#include<bits/stdc++.h>
using namespace std;
void snp(int a[],int n, int &ok){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        ok = 0;
    }else{
        a[i] = 1;
    }
}
main(){
    int n, ok = 1; cin >> n;
    int a[n + 1] = {0};
    while(ok){
        for(int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
        snp(a, n, ok);
    }


}

