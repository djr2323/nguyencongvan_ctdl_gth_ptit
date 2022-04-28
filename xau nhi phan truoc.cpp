#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = s.length() - 1; i >= 0; i--){
			if(s[i] == '1'){
				s[i] = '0';
				break;
			}else{
				s[i] = '1';
			}
		}
		cout << s << endl;
	}
}
