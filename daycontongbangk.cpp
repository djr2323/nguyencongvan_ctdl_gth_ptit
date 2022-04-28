#include<bits/stdc++.h>
using namespace std;
int n, k;
int X[100];
int arr[100];
vector<vector<int> > result;
void input(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(X[i]){
			sum += arr[i];
		}
	}
	if(sum == k){
		vector<int> x;
		for(int i = 1; i <= n; i++){
			if(X[i]){
				x.push_back(arr[i]);
			}
		}
		result.push_back(x);
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
		for(int i = 1; i <= n; i++)  cin >> arr[i];
		sort(arr + 1, arr + n + 1);
		result.clear();
		slove(1);
		sort(result.begin(), result.end());
		if(result.size() == 0) cout << -1;
		else{
			for(int i = 0; i < result.size(); i++){
				sort(result[i].begin(), result[i].end());
				cout << '[';
				for(int j = 0; j < result[i].size(); j++){
					cout << result[i][j];
					if(j != result[i].size() - 1) cout << ' ';
					else cout << ']';
				} 
				cout << ' ';
			}
		}
		cout << endl;
	}
}
