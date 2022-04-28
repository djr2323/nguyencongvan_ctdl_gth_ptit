#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int X[100];
int unused[100];
void input(){
	for(int i = 1; i <= n; i++){
		cout << s[X[i]];
	}
	cout << ' ';
}
void slove(int id){
	for(int i = 1; i <= n; i++){
		if(unused[i]){
			X[id] = i;
			unused[i] = 0;
			if(id == n){
				input();
			}else{
				slove(id + 1);
			}
			unused[i] = 1;
		}
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		s += '*';
		string ss;
		cin >> ss;
		s += ss;
		n = ss.length();
		memset(unused, 1, sizeof(unused));
		slove(1);
		s = "";
		cout << endl;
	}
}
