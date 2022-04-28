#include<bits/stdc++.h>
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    int k;
    cin >> c >> k;
    char mp[] = {'#','A','B','C','D','E','F','G','H','I','J','K'};
    int n = c - 'A' + 1;
    int x[50];
    set<vector<char> > v;
    vector<char> s;
    for(int i = 0; i < k; i++){
        x[i] = 1;
        s.push_back(mp[x[i]]);
    }
    v.insert(s);
    s.clear();
    int i = k - 1;
    while(i > 0){
        if(x[i] == n){
            i--;
        }
        if(x[i] < n){
            x[i]++;
            for(int j = i + 1; j < k; j++){
                x[j] = 1;
            }
            for(int j = 0; j < k; j++){
                s.push_back(mp[x[j]]);
            }
            int ok = 1;
            for(int i = 0; i < s.size() - 1; i++){
            	if(s[i] > s[i + 1]){
            		ok = 0;
            		break;
				}
			}
			if(ok){
				v.insert(s);
			}
            s.clear();
            i = k - 1;
        }
    }
    for(auto a : v){
        for(auto b : a){
        	cout << b;
		}
		cout << endl;
    }
    
}