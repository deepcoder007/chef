#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<stack>
#include<cstring>
#include<climits>
using namespace std;


stack<int> st;

inline int scan()
{
  register int n=0;
  register char c;
  c=getchar_unlocked();
  while( c<'0' || c>'9' )
    c=getchar_unlocked();
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

bool visited[10000007];   // number of visited nodes

inline int min(int i,int j)
{
  if( i<j ) return i;
  else return j;
}

int no_of_ops(int i,int j)  // no. of ops to convert i to j
{
  if( i<=0 ) return -1;
  int a,b;
  if( i%2==0 )  // i.e. even
    a=i/2;
  else
    a=(i-1)/2;
  b=2*i;
  if( a==j || b==j )
    {
      return 1;
    }
  else
    {
      i=min(no_of_ops(a,j),no_of_ops(b,j));
      if( i!=-1 ) return (i+1);
      else retu

inline void test()
{
  int s,f; int tmp,tmp2,tmp3;
  memset(visited,0,sizeof(visited));
  s=scan(); f=scan();  // s-> initial , f-> final
  register int i,j;


}


int main()
{
  int t=scan();
  while(t--)
    test();
  return 0;
}
