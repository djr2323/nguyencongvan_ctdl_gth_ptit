#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[100] = {0};
void input(){
	for(int i = 1; i <= k; i++){
		cout << X[i];
	}
	cout << ' ';
}
void slove(int i){
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			input();
		}else{
			slove(i + 1);
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		slove(1);
		cout << endl;
	}
}

