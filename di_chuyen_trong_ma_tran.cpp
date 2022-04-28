#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int A[MAX][MAX];
int M, N;
int BFS(int x1, int y1, int x2, int y2){

    queue<int> qux;
    queue<int> quy;
    int visited[MAX][MAX];
    memset(visited, 0, sizeof(visited));

    qux.push(x1);
    quy.push(y1);
    visited[x1][y1] = 1;

    while(!qux.empty() && !quy.empty()){
        int i = qux.front(); qux.pop();
        int j = quy.front(); quy.pop();
        int dis = A[i][j];
        if(j + dis > 0 && j + dis <= N && visited[i][j + dis] == 0){
            visited[i][j + dis] = visited[i][j] + 1;
            qux.push(i);
            quy.push(j + dis);
        }
         if(i + dis > 0 && i + dis <= N && visited[i + dis][j] == 0){
             visited[i + dis][j] = visited[i][j] + 1;
             qux.push(i + dis);
             quy.push(j);
         }
         if(visited[x2][y2] == 0) return -1;
         return visited[x2][y2] - visited[x1][y1];
    }

}
main(){
    
    int T; cin >> T;
    while(T--){
        cin >> M >> N;
        for(int i = 1; i <= M; i++)
            for(int j = 1; j <= N; j++) 
                cin >> A[i][j];
        cout << BFS(1, 1, M, N) << endl;
    }


