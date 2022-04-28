#pragma GCC Optimize("O3")
#include<bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define bit(x,i) ((x>>i)&1)
#define all(s) s.begin(),s.end()
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int n,a[5][10005];
bool d[20];
ll f[10005][1<<5];
void xuly()
{
    memset(d,0,sizeof(d));
    cin>>n;
    ll ans=-1e18;
    f0(i,4) f1(j,n) cin>>a[i][j],ans=max(ans,1ll*a[i][j]);
    if(ans<=0) return cout<<ans<<'\n',void();
    f0(x,(1<<4))
    {
        bool kt=1;
        f0(i,4)
        {
            if(bit(x,i)&&bit(x,i+1))
            {
                kt=0;
                break;
            }
        }
        d[x]=kt;
    }
    f1(i,n)
    {
        f0(x,1<<4)
        {
            f[i][x]=-1e18;
            if(d[x])
            {
                int s=0;
                f0(j,4) if(bit(x,j)) s+=a[j][i];
                f0(k,1<<4)
                {
                    if(d[k]&&((x&k)==0)) f[i][x]=max(f[i][x],f[i-1][k]+s);
                }
            }
            ans=max(ans,f[i][x]);
        }
    }
    cout<<ans;el;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) xuly();
  return 0;
}


//CHỌN Ô
//
//Cho một bảng kích thước 4 x N (gồm N cột). Mỗi ô (i, j) có điểm bằng A[i][j]. Bạn cần chọn một tập hợp các ô sao cho điểm đạt được là lớn nhất, và trong các ô được chọn, không có 2 ô nào có chung cạnh.
//
//
//
//Ví dụ với bảng có N = 3 như hình vẽ trên. Cách chọn tập tối ưu là (3,1), (1, 2), (4, 2) và (3, 3).
//
//Input:
//
//Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
//
//Mỗi test bắt đầu bởi số nguyên dương N (1 ≤ N ≤ 10000).
//
//4 dòng tiếp theo, mỗi dòng gồm N số A[i][j], là điểm tại ô (i,j) (-10000 ≤ A[i][j] ≤ 10000).
//
//Output: 
//
//Với mỗi test, in ra đáp án tìm được trên một dòng.
//
//Ví dụ:
//
//Input
//
//Output
//
//2
//
//3
//
//-1 9 3
//
//-4 5 -6
//
//7 8 9
//
//9 7 2
//
//2
//
//-1 -5
//
//-2 -6
//
//-3 -7
//
//-4 -8
//
//32
//
//-1