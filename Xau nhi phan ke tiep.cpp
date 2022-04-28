#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = s.length() - 1; i >= 0; i--){
			if(s[i] == '0'){
				s[i] = '1';
				break;
			}else{
				s[i] = '0';
			}
		}
		cout << s << endl;
	}
}
