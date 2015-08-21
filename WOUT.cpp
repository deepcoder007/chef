#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

// This is a binary index tree based question
// Caution: the BIT is 1-ary

inline int scan()
{
  register int n=0;
  register char c=getchar_unlocked();
  while( c<'0' || c>'9' )
    c=getchar_unlocked();
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

inline int min(int i,int j)
{
  if( i<j ) return i;
  else return j;
}

inline int max(int i,int j)
{
  if( i>j ) return i;
  else return j;
}

int n,h;
int l,r;  // for intput
int idx,sum;
int sBIT[1000009];   // the starting point of the BIT
int eBIT[1000009];   // the end point of the BIT
int intv[1000009];   // the number of intervals


inline void test()
{
  register int i,j;
  n=scan();h=scan();
  // height is from 1 to n (inclusive)
  memset(sBIT,0,sizeof(sBIT));
  memset(eBIT,0,sizeof(eBIT));
  for(i=0;i<n;i++)
    {
      l=scan(); r=scan();    // scan the lower and the upper bounds
      l++; r++;
      idx=l; 
      while(idx<=n)
	{
	  sBIT[idx]++;
	  idx+=(idx&-idx);
	}
      idx=(r+1);
      while(idx<=n)
	{
	  eBIT[idx]++;
	  idx+=(idx&-idx);
	}
    }
  // all intervals done -> now make the array
  memset(intv,0,sizeof(intv));
  for(i=1;i<=n;i++)    // over the whole range
    {
      sum=0;
      idx=i;
      while(idx>0)
	{
	  sum+=sBIT[idx];
	  idx-=(idx&-idx);
	}
      idx=i;
      while(idx>0)
	{
	  sum-=eBIT[idx];
	  idx-=(idx&-idx);
	}
      intv[i-1]=n-sum;
    }
  /*
  cout<<"print the intervals: "<<endl;
  for(i=0;i<n;i++)
    cout<<intv[i]<<" ";
  cout<<endl;
  */
  // now find the minimum window of size h
  sum=0;
  int min_sum=h*n;
  for(i=0;i<h;i++)
    sum+=intv[i];

  for(i=h;i<n;i++)
    {
      sum+=intv[i];
      sum-=intv[i-h];
      min_sum=min(min_sum,sum);
    }
  cout<<min_sum<<endl;
}

int main()
{
  int t=scan();
  while( t-- )
    test();
  return 0;
}
