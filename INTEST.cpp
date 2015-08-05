#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

inline int in()
{
  register int n=0;
  register char c;
  c=getchar_unlocked();
  while( c<'0' || c>'9' )
    {
      c=getchar_unlocked();
    }
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}


int main()
{
  int n;
  n=in();
  cout<<n<<endl;
  return 0;
}
