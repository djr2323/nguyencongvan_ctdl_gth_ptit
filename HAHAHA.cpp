#include<bits/stdc++.h>
using namespace std;
int n;
int X[20];
void input(){
	int ok = 1;
	if(X[1] != 1 || X[n] == 1) ok = 0;
	else{
		for(int i = 1; i <= n - 1; i++){
			if(X[i] == 1 && X[i + 1] == 1){
				ok = 0;
				break;
			}
		}
	}
	if(ok == 1){
		for(int i = 1; i <= n; i++){
			if(X[i]) cout << 'H';
			else cout << 'A';
		}
		cout << endl;
	}
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
	}
}
