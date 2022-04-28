#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m), c(k);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    for (auto &x : c)
        cin >> x;
    vector<int> ans;
    int x = 0, y = 0, z = 0;
    while (x < n && y < m && z < k)
    {
        if (a[x] == b[y] && b[y] == c[z])
        {
            ans.push_back(a[x]);
            x++, y++, z++;
        }
        else if (a[x] < b[y])
            x++;
        else if (b[y] < c[z])
            y++;
        else
            z++;
    }
    if (ans.size() == 0)
        cout << "NO\n";
    else
    {
        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}