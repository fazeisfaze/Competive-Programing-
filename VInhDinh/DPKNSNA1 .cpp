#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
#define FORW(i,a,b) for(int i=a;i<=b;i++)
#define FORB(i,a,b) for (int i=a;i>=b;i--)
#define forw(i,a,b) for (ll i=a;i<=b;i++)
#define forb(i,a,b) for (ll i=a;i>=b;i--)
#define fast {ios::sync_with_stdio(false); cin.tie(0); }
#define fi first
#define se second
#define pu push
#define puf push_front
#define pb push_back
#define pof pop_front
#define pob pop_back
#define fr front
#define all(a) a.begin(),a.end()
#define endl "\n"
#define db(val) "["#val" = "<<(val)<<"] "
int dX[] ={0,-1,0,1};
int dY[]= {-1,0,1,0};
const ll oo=1e18;
const ll MOD=1e9+7;
const ll mod=1e9+9;
int n,m;
int dp[10001][10001],v[100001],w[100001];
int main()
{
    fast;
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    cin>>m>>n;
    FORW(i,1,n)
    {
        cin>>v[i]>>w[i];

    }
    dp[0][0]=0;
    FORW(i,1,n)
     FORW(j,0,m)
     {
         dp[i][j]=dp[i-1][j];
         if (j-w[i]>=0)
         dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);

     }
    cout<<dp[n][m];

}

