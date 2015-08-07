#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int t,n,m;
int arr[100009];

inline int scan()
{
  register char c;
  register int n=0;
  c=getchar_unlocked();
  while( c<'0' || c>'9')
    c=getchar_unlocked();
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

int main()
{
  register int i,j;
  int a,b,d,e;
  char c;
  t=scan();
  while(t--)
    {
      n=scan();m=scan();
      for(i=1;i<m;i++)
	{
	  cin>>c>>a;
	  arr[a]=c;


}
