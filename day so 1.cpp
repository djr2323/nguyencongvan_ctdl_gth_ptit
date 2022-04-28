#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(i == 0) cout << '[';
			cout << a[i];
			if(i != n - 1) cout << ' ';
			if(i == n - 1) cout << ']';
			
		}
		cout << endl;
	    while(1){
	    	for(int i = 0; i < n - 1; i++){
	    		a[i] = a[i] + a[i + 1];
	    		if(i == 0) cout << '[';
				cout << a[i];
				if(i != n - 2) cout << ' ';
				if(i == n - 2) cout << ']';
			}
			cout << endl;
			if(n == 1) break;
			n--;
		}
		
	}
}
