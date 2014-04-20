#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	int c;
	while( a!=0 )
	{ 
		c=a; a=b%a;  b=c;
	}
	return b;
}


inline void test()
{
	int N;
	cin>>N;
	int a,b;
	cin>>a;
	int score=a;
	int tmp;
	register int i;
	for( i=1;i<N;i++)
	{
		cin>>b;
		if( b> score )
		{
			score=gcd( b,score);
		}
		else if( b< score )
		{
			score=gcd( score, b);
		}
	}
	cout<<score<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
		test();
	return 0;
}
