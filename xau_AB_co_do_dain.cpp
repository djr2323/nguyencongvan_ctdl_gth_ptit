#include<bits/stdc++.h>
using namespace std;
int n;
int X[11];
void input(){
	for(int i = 1; i <= n; i++){
		if(X[i] == 0) cout << 'A';
		else cout << 'B';
	}
	cout << ' ';
}
void slove(int id){
	for(int i = 0; i <= 1; i++){
		X[id] = i;
		if(id == n){
			input();
		}else{
			slove(id + 1);
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		slove(1);
		cout << endl;
	}
}
