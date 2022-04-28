#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


int n, m;
vector<int> a[1005];
bool check[1005];
int w[1005][1005];

bool bfs(int u){
    check[u] = true;
    queue<pair<int,int>> q;
    q.push({u, 0});
    while (q.size()){
        pair<int,int> top = q.front();
        q.pop();
        for (auto it : a[top.first]){
            if (!check[it]){
                check[it] = true;
                q.push({it, top.second + w[top.first][it]});
            }
            else if (it == u && top.second + w[top.first][it] < 0) return true;
        }
    }
    return false;
}





int main (){
    int t;
    cin >> t;
    while (t --){
        for (int i = 0; i < 1001; i ++){
            a[i].clear();
            check[i] = false;
        }
        int v, e;
        cin >> v >> e;
        while (e --){
            int x, y, z;
            cin >> x >> y >> z;
            a[x].push_back(y);
            w[x][y] = z;
        }
        bool flag = false;
        for (int i = 1; i <= v; i ++){
            memset(check, false, sizeof(check));
            if (bfs(i)) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << 1 << endl;
        else cout << 0 << endl;

    }

}

//CHU TRÌNH ÂM
//
//Cho đồ thị có trọng số G=<V, E> được biểu diễn dưới dạng danh sách cạnh trọng số âm hoặc dương. Hãy viết chương trình xác định xem đồ thị có chu trình âm hay không.
//
//Input:
//
//Dòng đầu tiên đưa vào T là số lượng bộ test.
//Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
//T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
//Output:
//
//Đưa ra 1 hoặc 0 theo từng dòng của mỗi test tương ứng với đồ thị có hoặc không có chu trình âm.
//     Ví dụ:
//
//Input:
//
//Output:
//
//2
//
//3  3
//
//1  2 -1
//
//2  3  4
//
//3  1 -2
//
//3  3
//
//1  2 -1
//
//2  3  2
//
//3  1 -2
//
// 
//
//0
//
//1