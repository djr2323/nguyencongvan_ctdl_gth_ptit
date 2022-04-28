#include<bits/stdc++.h>
using namespace std;
int n;
int X[100];
void result(){
	int ok = 1;
	for(int i = 1; i <= n; i++){
		if(X[i] != X[n - i + 1]){
			ok = 0;
			break;
		}
	}
	
	if(ok == 1){
		for(int i = 1; i <= n; i++){
			cout << X[i] << ' ';
		}
		cout <<'\n';
	}
}
void slove(int id){
	for(int i = 0; i <= 1; i++){
		X[id] = i;
		if(id == n){
			result();
		}else{
			slove(id + 1);
		}
	}
}
main(){
	cin >> n;
	memset(X, 0, sizeof(X));
	slove(1);
}

