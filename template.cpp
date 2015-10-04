#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<set>
#include<vector>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<cstring>
#include<utility>
#include<climits>
#include<queue>
#include<deque>
#define mp make_pair
#define pb push_back
#define dbg() cout<<"DEBUG"<<endl
#define REP(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,a,b) for(i=a;i<b; i++)
#define sci(x) scanf("%d",&x)
#define sc2i(x,y) scanf("%d%d",&x,&y)
#define scli(x) scanf("%I64d", &x)
#define scl2i(x,y) scanf("%I64d%I64d",&x,&y)
#define debug(n) cout<<__LINE__<<" #n "<<n<<endl
#define debug2(a,b) cout<<__LINE__<<" #a "<<a<<" #b "<<b<<endl
#define debug3(a,b,c)  cout<<__LINE__<<" #a "<<a<<" #b "<<b<<" #c "<<c<<endl
#define fill(a,x) memset(a,x,sizeof(a))
#define trace(x) cout<<__FUNCTION__<<" : "<<__LINE__<<" #x "<<x<<endl
#define trace2(x,y) cout<<__FUNCTION__<<" : "<<__LINE__<<" #x "<<x<<" #y "<<y<<endl
#define tracea(x,a,b) cout<<__FUNCTION__<<" : "<<__LINE__<<" #x "; FOR(i,a,b) cout<<x[i]<<" , " ; cout<<endl;
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef unsigned int ui;
typedef long double ld;
typedef vector<int> VI;
typedef vector<long> VL;
typedef vector<long long> VLL;
typedef map<int,int> mii;

inline int scan()
{
  register int n=0;
  register int sign=1;
  register char c=getchar_unlocked();
  while( (c<'0' || c>'9') && c!='-' )
    c=getchar_unlocked();
  if( c=='-' )
    {
      sign=-1;
      c=getchar_unlocked();
    }
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}
// often implementing stack and queue via array can be faster and better 

int n,m,k;
map<int,VI > g_list;
int g[510][510];
int rg[510][510];  // the backup graph used in activer processing
int p[510];
bool vis[510];
set<int> hk;    // the set that are in the destination
int tmp1,tmp2,tmp3;

bool haspath()    // return true if there is a path -> this is the bfs
{
  fill(vis,0), fill(p,-1);
  queue<int> q;   // the queue of the dfs
  q.push(1), vis[1]=true, p[1]=1;
  while( !q.empty() )
    {
      tmp1=q.top();q.pop();


    }
}

inline void test()
{
  register int i,j;
  n=scan(), m=scan(), k=scan();
  i=(n+1); while(i--) g_list[i]=VI();
  i=k;
  hk.clear();
  while(i--) sci(tmp1), hk.insert(tmp1);
  fill(g,0), fill(rg,0);
  i=m;
  while(i--) sc2i(tmp1,tmp2), g[tmp1][tmp2]=1, rg[tmp1][tmp2]=1 , g[tmp2][tmp1]=1, rg[tmp2][tmp1]=1;  // input the graph




}

int main()
{
  int t;
  t=scan();
  while(t--)
    test();
  return 0;
}
