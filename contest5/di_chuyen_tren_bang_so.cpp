#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int n, m;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

int a[505][505];

struct Cell
{
    int x, y, cost;
};

bool operator<(Cell A, Cell B)
{
    if (A.cost == B.cost)
    {
        if (A.x == B.x)
            return A.y < B.y;
        else
            return A.x < B.x;
    }
    return A.cost < B.cost;
}

bool isSafe(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int minCost()
{
    set<Cell> s;
    int dp[505][505];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            dp[i][j] = 1000000000;
    dp[0][0] = a[0][0];
    s.insert({0, 0, 0});
    while (s.size())
    {
        Cell tmp = *s.begin();
        s.erase(s.begin());
        for (int i = 0; i < 4; i++)
        {
            int x_new = tmp.x + dx[i];
            int y_new = tmp.y + dy[i];
            if (isSafe(x_new, y_new))
            {
                if (dp[x_new][y_new] > dp[tmp.x][tmp.y] + a[x_new][y_new])
                {
                    if (dp[x_new][y_new] != 1e9)
                        s.erase(s.find({x_new, y_new, dp[x_new][y_new]}));
                    dp[x_new][y_new] = dp[tmp.x][tmp.y] + a[x_new][y_new];
                    s.insert({x_new, y_new, dp[x_new][y_new]});
                }
            }
        }
    }
    return dp[n - 1][m - 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        cout << minCost() << endl;
    }
}


//DI CHUYỂN TRÊN BẢNG SỐ
//
//Cho một bảng số kích thước N x M. Chi phí khi đi qua ô (i,j) bằng A[i][j]. Nhiệm vụ của bạn là hãy tìm một đường đi từ ô (1, 1) tới ô (N, M) sao cho chi phí là nhỏ nhất. Tại mỗi ô, bạn được phép đi sang trái, sang phải, đi lên trên và xuống dưới.
//
//Input:
//
//Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
//Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N, M ≤ 500).
//N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i][j] ≤ 9).
//Output: 
//
//Với mỗi test, in ra một số nguyên là chi phí nhỏ nhất cho đường đi tìm được.
// 
//
//Ví dụ:
//
//Input:
//
//Output
//
//3
//
//4
//
//5
//
//0 3 1 2 9
//
//7 3 4 9 9
//
//1 7 5 5 3
//
//2 3 4 2 5
//
//1
//
//6
//
//0 1 2 3 4 5
//
//5 5
//
//1 1 1 9 9
//
//9 9 1 9 9
//
//1 1 1 9 9
//
//1 9 9 9 9
//
//1 1 1 1 1
//
//24
//
//15
//
//13
//
// 