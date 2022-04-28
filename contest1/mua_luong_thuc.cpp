#include<bits/stdc++.h>
using namespace std;
int slove(int n, int s, int m, int a){
	if(n < m) return -1;
	if(s > 6){
		if(6*(n - m) < m) return -1;
	}
	for(int i = 1; i <= s - a; i++){
		if(n*i >= s*m) return i;
	}
	
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m;
		cin >> n >> s >> m;
		int a = s/7;
		cout << slove(n,s,m,a) << endl;
	}
}