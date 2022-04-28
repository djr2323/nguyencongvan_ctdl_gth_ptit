#include<bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(long long a, long long b){
        return a > b;
    }
};
main(){
      int t;
      cin >> t;
      while(t--){
            priority_queue<long long, vector<long long>, cmp > q;
            int n;
            long long a;
            cin >> n;
            for(int i = 0; i < n; i++){
                  cin >> a;
                  q.push(a);
            }
            long long sum = 0;
            while(q.size() > 1){
                  long long x = q.top(); q.pop();
                  long long y = q.top(); q.pop();
                  q.push(x + y);
                  sum += x + y;
            }
            cout << sum << endl;
      }

}