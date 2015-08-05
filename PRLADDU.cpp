#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

inline long  scan()
{
  register long  n=0;
  register char c;
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

long long t,n,d;

int main()
{
  register int i,j;
  long long total;
  t=scan();
  while(t--)
    {
      total=0;
      n=scan();
      d=scan(); // the first number
      for(i=1;i<n;i++)
	{
	  if(d>0)
	    total+=d;
	  else
	    total-=d;
	  d+=scan();
	}
      cout<<total<<endl;
    }
}
