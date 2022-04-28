#pragma GCC Optimize("O3")
#include<bits/stdc++.h>
#include<string>
#include<vector>
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
#define all(s) s.begin(),s.end()
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
    priority_queue<int,vi,greater<int>>q1,q2;
    priority_queue<int,vi>q;
    int s=0,n;
    cin>>n;
    f1(i,n)
    {
        int x;
        cin>>x;
        s+=x;
        if(x%3==1) q1.push(x);
        else if(x%3==2) q2.push(x);
        else q.push(x);
    }
    if(s==0) return cout<<0<<'\n',void();
    if(s%3==1)
    {
        if(!q1.size())
        {
            if(!q2.size()) return cout<<-1<<'\n',void();
            else q2.pop();
            if(!q2.size()) return cout<<-1<<'\n',void();
            else q2.pop();
        }
        else q1.pop();
    }
    else if(s%3==2)
    {
        if(!q2.size())
        {
            if(!q1.size()) return cout<<-1<<'\n',void();
            else q1.pop();
            if(!q1.size()) return cout<<-1<<'\n',void();
            else q1.pop();
        }
        else q2.pop();
    }
    while(q1.size()) q.push(q1.top()),q1.pop();
    while(q2.size()) q.push(q2.top()),q2.pop();
    if(!q.size()) cout<<-1;
    while(q.size()) cout<<q.top(),q.pop();
    el;
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) xuly();
  return 0;
}

//BỘI SỐ LỚN NHẤT CỦA 3
//
//Cho dãy số A[] có N phần tử là các chữ số từ 0 đến 9. Nhiệm vụ của bạn là hãy chọn lấy một tổ hợp các phần tử và sắp xếp chúng sao cho thu được số lớn nhất chia hết cho 3.
//
//Nếu không tìm được số nào, in ra -1.
//
//Input:
//
//Dòng đầu tiên là số lượng bộ test T (1 ≤ N ≤ 50).
//Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100 000).
//Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 9).
//Output: 
//
//Với mỗi test, in ra đáp án tìm được trên một dòng.
//Ví dụ:
//
//Input
//
//Output
//
//3
//
//3
//
//8 1 9
//
//5
//
//8 1 7 6 0
//
//2
//
//5 2
//
// 
//
//981
//
//8760
//
//-1