#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int n, m;
bool check[1001];
vector<int> A[1001];

int BFS(int u, int v)
{
    check[u] = true;
    queue<pair<int, int>> Q;
    Q.push({u, 0});
    while (Q.size())
    {
        pair<int, int> tmp = Q.front();
        Q.pop();
        if (tmp.first == v)
            return tmp.second;
        for (auto x : A[tmp.first])
            if (!check[x])
                Q.push({x, tmp.second + 1}), check[x] = true;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i <= 1001; i++)
        {
            A[i].clear();
        }
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            A[a].push_back(b);
        }
        int res = 0, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                memset(check, false, sizeof(check));
                if (i != j)
                {
                    int f = BFS(i, j);
                    if (f != -1)
                        res += f, cnt++;
                }
            }
        }
        cout << setprecision(2) << fixed << res * 1.0 / cnt << endl;
    }
}


//ĐƯỜNG ĐI TRUNG BÌNH
//
//Cho một đồ thị có hướng gồm N đỉnh và M cạnh. Nhiệm vụ của bạn là hãy tính khoảng cách trung bình ngắn nhất giữa hai node bất kì nếu như chúng liên thông với nhau. Input đảm bảo rằng trong một nhóm liên thông, nếu như u đi tới được v thì v cũng đi tới được v với mọi cặp u, v.
//
//
//
//Input:Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ N ≤ 100, M ≤ N*(N-1)/2). M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối đơn hướng từ u tới v.
//
//Output:  Với mỗi test, in ra đáp án tìm được với độ chính xác 2 chữ số sau dấu phảy.
//
//Ví dụ:
//
//Input:
//
//Output
//
//2
//
//4 5
//
//1 2
//
//2 4
//
//1 3
//
//3 1
//
//4 3
//
//7 5
//
//1 2
//
//1 4
//
//4 2
//
//2 7
//
//7 1
//
//1.83
//
//1.75
//
// 
//
// 
//
//Giải thích test 1: Ta có
//
//d(1, 2) = 1, d(1, 3) = 1, d(1, 4) = 2; d (2, 1) = 3, d(2, 3) = 2, d(2, 4) = 1;
//
//d(3, 1) = 1, d(3, 2) = 2, d(3, 4) = 3; d(4, 1) = 2, d(4, 2) = 3, d(4, 3) = 1.
//
//Trung bình bằng 22/12 = 1.83