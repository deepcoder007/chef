#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

inline int scan()
{
  register int n=0;
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

int sum[100];
int arr[100][100];  // the array to store the numbers
int n;
int k;

inline int max(int i,int j)
{
  if( i< j ) return j;
  else return i;
}

int main()
{
  register int i,j;
  n=scan();
  while(n--)
    {
      k=scan();
      for(i=1;i<=k;i++)  
	for(j=0;j<i;j++)
	  arr[i-1][j]=scan();
      //use the dp approach
      for(i=0;i<k;i++)
	sum[i]=arr[k-1][i];
      for(i=k-2;i>=0;i--)  // for all the rows
	{
	  for(j=0;j<=i;j++) 
	    {
	      sum[j]=max(sum[j],sum[j+1])+arr[i][j];
	    }
	}
      cout<<sum[0]<<endl;
    }
  return 0;
}

