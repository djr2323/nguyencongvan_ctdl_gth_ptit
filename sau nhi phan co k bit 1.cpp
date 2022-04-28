#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[20];
void input(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]) sum += 1;
		if(sum > k) break;
	}
	if(sum == k){
		for(int i = 1; i <= n; i++){
			cout << X[i];
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
		cin >> n >> k;
		slove(1);
	}
}
