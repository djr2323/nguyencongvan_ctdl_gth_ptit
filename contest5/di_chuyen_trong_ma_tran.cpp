#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


struct Cell{
    int x, y, c;
};
int a[1005][1005];

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, m, ans = 1e9;
        cin >> n >> m;
        bool check[1005][1005];
        memset(check, true, sizeof(check));
        
        check[1][1] = false;
        for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= m; j ++)
                cin >> a[i][j];

        
        queue<Cell> q;
        q.push({1,1,0});
        while (q.size()){
            Cell top = q.front();
            q.pop();
            if (top.x == n && top.y == m)  {
                ans = min(ans, top.c);
                break;
            }
            if (top.x > n || top.y > m) continue;
            if (check[top.x + a[top.x][top.y]][top.y]){
                check[top.x + a[top.x][top.y]][top.y] = false;
                q.push({top.x + a[top.x][top.y], top.y, top.c + 1});
            }
            if (check[top.x][top.y + a[top.x][top.y]]) {
				q.push({ top.x,top.y + a[top.x][top.y],top.c + 1 });
				check[top.x][top.y + a[top.x][top.y]] = false;
			}
        }
        if (ans == 1e9)
            cout << -1 << endl;
        else {
            cout << ans << endl;
        }
    }

}


//DI CHUYỂN TRONG MA TRẬN
//
//Cho ma trận A[M][N]. Nhiệm vụ của bạn hãy tìm số bước đi ít nhất dịch chuyển từ vị trí A[1][1] đến vị trí A[M][N]. Biết mỗi bước đi ta chỉ được phép dịch chuyển đến vị trí A[i][j+A[i][j]] hoặc vị trí A[i+A[i][j]][j] bên trong ma trận.
//
//Input:
//
//Dòng đầu tiên đưa vào số lượng test T.
//Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N; phần thứ hai là các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
//T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤M, N, A[i][j]≤103.
//Output:
//
//Đưa ra kết quả mỗi test theo từng dòng. In ra -1 nếu không tìm được đáp án.
//Ví dụ:
//
//Input
//
//Output
//
//1
//
//3  3
//
//2  1  2
//
//1  1  1
//
//1  1  1
//
//2