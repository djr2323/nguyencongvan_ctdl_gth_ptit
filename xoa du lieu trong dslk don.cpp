#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int cls;
	cin >> cls;
	for(int i = 0; i < n; i++){
		if(arr[i] != cls) cout << arr[i] << ' ';
	}
}
