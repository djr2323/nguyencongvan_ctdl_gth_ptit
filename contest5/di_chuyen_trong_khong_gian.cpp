#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

char M[31][31][31];
bool check[31][31][31];
int a, b, c;
int X[6] = {1, -1, 0, 0, 0, 0};
int Y[6] = {0, 0, 1, -1, 0, 0};
int Z[6] = {0, 0, 0, 0, 1, -1};
struct hhcn
{
    int x, y, z;
};
bool ktra(int m, int n, int p)
{
    if (m >= 0 && m < a && n >= 0 && n < b && p >= 0 && p < c && M[m][n][p] != '#' && !check[m][n][p])
        return true;
    return false;
}
int BFS(hhcn s, hhcn e)
{
    queue<pair<hhcn, int>> A;
    A.push({s, 0});
    check[s.x][s.y][s.z] = true;
    M[s.x][s.y][s.z] = '#';
    while (A.size())
    {
        pair<hhcn, int> f = A.front();
        A.pop();
        if (f.first.x == e.x && f.first.y == e.y && f.first.z == e.z)
            return f.second;
        for (int i = 0; i < 6; i++)
        {
            int m = f.first.x + X[i];
            int n = f.first.y + Y[i];
            int p = f.first.z + Z[i];
            if (ktra(m, n, p))
            {
                A.push({{m, n, p}, f.second + 1});
                check[m][n][p] = true;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(check, false, sizeof(check));
        cin >> a >> b >> c;
        hhcn s, e;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    cin >> M[i][j][k];
                    if (M[i][j][k] == 'S')
                        s = {i, j, k};
                    if (M[i][j][k] == 'E')
                        e = {i, j, k};
                }
            }
        }
        cout << BFS(s, e) << endl;
    }
}

//DI CHUYỂN TRONG KHÔNG GIAN
//
//Cho một hình hộp chữ nhật có kích thước A x B x C, trong đó A là chiều cao, B là chiều rộng và C là chiều dài. Mỗi ô có thể là một ô trống ‘.’ hoặc vật cản ‘#’.
//
//Mỗi bước, bạn được phép di chuyển sang một ô kề bên cạnh (không được đi chéo). Nhiệm vụ của bạn là tìm đường đi ngắn nhất bắt đầu ‘S’ tới vị trí kết thúc ‘E’.
//
//Input:
//
//Dòng đầu tiên là số lượng bộ test T (1 ≤ N ≤ 50).
//Mỗi test bắt đầu bởi 3 số nguyên A, B, C (A, B, C ≤ 30).
//Tiếp theo là A khối, mỗi khối gồm B x C kí tự mô tả một lát cắt của hình hộp chữ nhật. Giữa 2 khối có một dấu xuống dòng.
//Output: 
//
//In ra một số nguyên là đường đi ngắn nhất từ S tới E. Nếu không di chuyển được, in ra -1.
//Ví dụ:
//
// 
//
//Input
//
//Output
//
//2
//
//3 4 5
//
//S....
//
//.###.
//
//.##..
//
//###.#
//
// 
//
//#####
//
//#####
//
//##.##
//
//##...
//
// 
//
//#####
//
//#####
//
//#.###
//
//####E
//
// 
//
//1 3 3
//
//S##
//
//#E#
//
//###
//
// 
//
//11
//
//-1