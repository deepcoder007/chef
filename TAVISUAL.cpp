#include<iostream>
#include<cstdio>
using namespace std;


void test()
{
	int N,C,Q;
	scanf("%d %d %d",&N,&C,&Q);
	register int i,j,k;
	int L,R;
	int curr=C;   //stores the current position of the ball
	for(i=0;i<Q;i++)
	{
		scanf("%d %d",&L,&R);
		if( curr>=L && curr<=R )   // if in the range of flipping 
		{
			curr= L+R-curr;
		}
	}
	printf("%d\n",curr);
	return;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
