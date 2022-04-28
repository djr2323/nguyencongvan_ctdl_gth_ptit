#include<bits/stdc++.h>
using namespace std;
void sapxep(int t, int n, int a[], int k){
    for(int i = t; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] != k && a[j] != k){
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
        }
    }
}
void slove(int n, int x[], int y[]){
    int t;
    for(int i = n; i >= 1; i--){
        if(x[i - 1] < x[i]){
            t = i;
            break;
        }
    }
    int a = 1001;
    int id = 0;
    for(int i = 1; i <= n; i++){
        if(i <= t - 2){
            y[i] = x[i];
        }
        for(int j = t; j <= n; j++){
            if(x[j] < a && x[j] > x[t - 1]){
                a = x[j];
                id = j;
            }
        }
        
    }
    if(a != 1001){
        swap(y[t - 1], y[id]);
        sapxep(t,n,y,a);
    }else{
        sort(y + t, y + n);
    }
    int sum = 0;
    int m = n;
    for(int i = 1; i <= n; i++){
    	if(x[i] == m--) sum += 1;
	}
	if(sum == n){
		for(int i = 1; i <= n; i++) cout << i << ' ';
	}else{
		for(int i = 1; i <= n; i++) cout << y[i] <<' ';
	}
}
main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
	    cin >> n;
	    int x[1001];
	    int y[1001];
	    for(int i = 1; i <= n; i++){
	        cin >> x[i];
	        y[i] = x[i];
	    }
	    slove(n, x, y);
	    cout << endl;
	}
}
