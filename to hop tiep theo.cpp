#include<bits/stdc++.h>
using namespace std;
void input(int n, int k){
	int b[1001];
	int c[1001];
	int z[1001];
    for(int i = 1; i <= k; i++){
    	cin >> b[i];
        c[i] = b[i];
        z[i] = b[i];
    }
    int dem = 0;
    for(int i = 1; i <= k; i++){
    	if(c[i] == n - k + i){
    		dem++;
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
	if(dem == k){
		cout << k;
	}else{
		int sum = 0;
		for(int i = 1; i <= k; i++){
			if(count(z + 1, z + k + 1, c[i]) == 0) sum++;
		}
		cout << sum;
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
