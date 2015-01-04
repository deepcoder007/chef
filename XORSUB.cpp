#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

bool isxor[2000];   // if it is in the xor list
int xorlist[1000];    // the point to the next integer in the xorlist
int tmp;
int n,k;

inline void test()
{
	register int idx=0;  // the current free index of xorlist
	register int i,j;
	scanf("%d%d",&n,&k);
	memset(isxor,0,sizeof(isxor));
	isxor[k]=true;
	xorlist[idx++]=k;
	while(n--)
	{
		scanf("%d",&tmp);
		for(i=0;i<idx;i++)
		{
			j=xorlist[i]^tmp;
			if( !isxor[j]  )
			{
				isxor[j]=true;
				xorlist[idx++]=j;
			}
		}
	}
	for(i=1999;i>k && !isxor[i];i--);
	printf("%d\n",i);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
