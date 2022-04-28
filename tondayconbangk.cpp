#include<bits/stdc++.h>
using namespace std;
int n, total, k = 0;
int X[100];
int Y[100];
void result(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]){
			sum += Y[i];
		}
	}
	if(sum == total){
		k++;
		for(int i = 1; i <= n; i++){
			if(X[i]){
				cout << Y[i] << ' ';
			}
		}
		cout << endl;
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
	cin >> n >> total;
	for(int i = 1; i <= n; i++) cin >> Y[i];
	memset(X, 1, sizeof(X));
	slove(1);
	cout << k;
}

