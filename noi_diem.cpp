#include<bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(float a, float b){
        return a > b;
    }
};
main(){
      float t;
      cin >> t;
      while(t--){
            priority_queue<float, vector<float>, cmp > q;
            float n;
            float a;
            cin >> n;
            for(float i = 0; i < n; i++){
                  cin >> a;
                  q.push(a);
            }
            float sum = 0;
            while(q.size() > 1){
                  float x = q.top(); q.pop();
                  float y = q.top(); q.pop();
                  q.push(x + y);
                  sum += x + y;
            }
            cout << sum << endl;
      }

}