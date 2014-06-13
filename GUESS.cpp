#include<cstdio>
#include<iostream>
#include<cstdint>
using namespace std;


inline void test()
{
	long long int m,n;
	cin>>m>>n;
	long long int num=0,deno=0;
	if( m%2==0 && n%2==0 )
	{ num=1; deno=2; }
	else if( m%2!=0 && n%2==0 )   // m is odd
	{ num=1; deno=2; }
	else if( m%2==0 && n%2!=0 )  //  n is odd
	{ num=1; deno=2; }
	else
	{ num=(m*n-1)/2; deno=m*n; }
	cout<<num<<'/'<<deno<<endl;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
