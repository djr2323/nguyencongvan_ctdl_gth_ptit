#include<bits/stdc++.h>
using namespace std;
int money[20] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int dem = 0;
int n;
void Try(int i){
    int m = n;
    while(n >= 0){
        n -= money[i];
        dem++;
    }
    n += money[i];
    dem -= 1;
    if(i == 0 || n == 0){
        cout << dem << endl;
    }else{
        Try(i - 1);
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(9);
        dem = 0;
    }
}