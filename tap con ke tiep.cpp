#include<bits/stdc++.h>
using namespace std;
void input(int n, int k){
	int b[k + 1];
    int c[k + 1];
    for(int i = 1; i <= k; i++){
    	cin >> b[i];
        c[i] = b[i];
    }
    int count = 0;
    for(int i = 1; i <= k; i++){
    	if(c[i] == n - k + i){
    		count++;
		}
	}
    for(int i = 1; i <= k; i++){
        b[i] = c[i];
        if(c[i] == n - k + i){
            b[i - 1] += 1;
            b[i] = b[i - 1] + 1;
            for(int j = i; j <= k - 1; j++){
                b[j + 1] = b[j] + 1;
            }
            break;
        }
    }
    int t;
    for(int i = k; i >= 1; i++){
        if(c[i] < n - k + i){
            t = i;
            break;
        }
    }
    for(int i = 1; i <= k; i++){
        if(i < t){
            c[i] = b[i];
        }
            c[t] = b[t] + 1;
            if(i > t){
                c[i] = b[t] + (i - t);
            }
    }
	if(count == k){
		for(int i = 1; i <= k; i++) cout << i << ' ';
	}else{
		for(int i = 1; i <= k; i++) cout << c[i] << ' ';
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
        cin >> n >> k;
        input(n, k);
        cout << endl;
	}
}
