#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	int arr[n]; 
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n - 1; j++){
			if(arr[i] == arr[j]) arr[j] = 1000000000;
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[i] != 1000000000) cout << arr[i] << ' ';
	}
}
