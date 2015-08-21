#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<climits>
using namespace std;

inline unsigned int min(unsigned int i,unsigned int j)
{
  if( i<j ) return i;
  else return j;
}

inline int scan()
{
  register int n=0;
  register char c=getchar_unlocked();
  while( c<'0' || c>'9')
    c=getchar_unlocked();
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

unsigned int dp[2][1000009];   // the dp for number of steps

inline void test()
{
  register int i,j;
  int l;
  string str1,str2;
  cin>>str1>>str2;
  l=str1.size();
  int count=0;
  int count2=0;
  bool pos=true;    // if it is possible
  if( str1[0]=='.' ) dp[0][0]=0;
    else dp[0][0]=INT_MAX;
  if( str2[0]=='.' ) dp[1][0]=0;
  else dp[1][0]=INT_MAX;

  for(i=1;i<l;i++)
    {
      dp[0][i]=min(dp[0][i-1],dp[1][i-1]+1);
      dp[1][i]=min(dp[1][i-1],dp[0][i-1]+1);
      if( str1[i]=='#' ) dp[0][i]=INT_MAX;
      if( str2[i]=='#' ) dp[1][i]=INT_MAX;
    }
  /**
  cout<<"The dp matrix: "<<endl;
  for(i=0;i<2;i++)
    {
      for(j=0;j<l;j++)
	cout<<dp[i][j]<<" ";
      cout<<endl;
    }
  cout<<"End of dp matrix: "<<endl;
  **/
  if( dp[0][l-1]==INT_MAX && dp[1][l-1]==INT_MAX )
    cout<<"No"<<endl;
  else 
    {
      cout<<"Yes"<<endl;
      cout<<min(dp[0][l-1],dp[1][l-1])<<endl;
    }
}
 
int main()
{
  int t=scan();
  while( t-- )
    test();
  return 0;
}
