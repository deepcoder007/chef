#include<iostream>
#include<cstdio>
#include<cstdlib>
#define FOR(i,j,k) for(i=j;i<=k;i++)   // a nice macro
using namespace std;

inline int scan()
{
  register char c;
  register int n=0;
  c=getchar_unlocked();
  while( c<'0' || c>'9')
    c=getchar_unlocked();
  while( c>='0' && c<='9')
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

int long_num[200];   // to store the long number
int n;
int f,tmp;



int main()
{
  register int i,j;
  n=scan();
  while(n--)
    {
      tmp=0;
      f=scan(); // the number whose factorial we have to find
      if( f==1 )
	{
	  cout<<1<<endl;
	  continue;
	}
      FOR(i,0,199)  // for 200 digits max
	long_num[i]=-1;
      long_num[199]=1;
      
      while( f > 1 )
	{
	  // multiply long_num by f
	  i=199;
	  tmp=0;
	  while( long_num[i]>=0 )
	    {
	      tmp=(tmp+f*long_num[i]);
	      long_num[i]=tmp%10;
	      tmp/=10;
	      i--;
	    }
	  while(tmp)
	    {
	      long_num[i]=tmp%10;
	      tmp/=10;
	      i--;
	    }
	  f--;
      }
      i=199;
      while(long_num[i]!=-1 ) i--;
      
      //i=190;
      //cout<<"i : "<<i<<endl;
      // now print the long num
      FOR(i,i+1,199)
	cout<<long_num[i];
      cout<<endl;
    }
  return 0;
}
