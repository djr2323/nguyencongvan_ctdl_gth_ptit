#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[100] = {0};
map<int, char*> map0;
void input(){
	for(int i = 1; i <= k; i++){
		cout << map0[X[i]];
	}
	cout << endl;
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
	map0[1] = "A";
	map0[2] = "B";
	map0[3] = "C";
	map0[4] = "D";
	map0[5] = "E";
	map0[6] = "F";
	map0[7] = "G";
	map0[8] = "H";
	map0[9] = "I";
	map0[10] = "J";
	map0[11] = "K";
	map0[12] = "L";
	map0[13] = "M";
	map0[14] = "N";
	map0[15] = "O";
	map0[16] = "P";
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		slove(1);
		cout << endl;
	}
}

