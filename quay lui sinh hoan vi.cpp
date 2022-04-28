#include<bits/stdc++.h>
using namespace std;
int n;
int X[100];
int unused[100];
void input(){
	for(int i = 1; i <= n; i++){
		cout << X[i];
	}
	cout << ' ';
}
void slove(int i){
	for(int j = 1; j <= n; j++){
		if(unused[j]){
			X[i] = j;
			unused[j] = 0;
			if(i == n){
				input();
			}else{
				slove(i + 1);
			}
			unused[j] = 1;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		memset(unused, 1, sizeof(unused));
		slove(1);
		cout << endl;
	}
}
