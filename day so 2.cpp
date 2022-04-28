#include<bits/stdc++.h>
using namespace std;
int result[1000][1000];
main(){
	int t, w = 0;
	cin >> t;
	while(t--){
		int n, w = 0;
		cin >> n;
		int h = n;
		int c = 1;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			result[w][i] = a[i];
		}
		w++;
	    while(1){
	    	for(int i = 0; i < n - 1; i++){
	    		a[i] = a[i] + a[i + 1];
	    		result[w][i] = a[i];
			}
			w++;
			if(n == 1) break;
			n--;
		}	
		for(int i = h - 1; i >= 0; i--){
			cout << '[';
			for(int j = 0; j < c; j++){
				cout << result[i][j];
				if(j == c - 1) cout << ']';
				else cout << ' ';
			}
			c++;
			cout << ' ';
		}
		cout << endl;
	}
}
