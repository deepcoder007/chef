// SANSKAR greedy
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<set>
#include<cstring>
using namespace std;

int n;
int arr[25];
int k;
int follow[10];
int sum;
int req;


inline void test()
{
	memset(arr,0,sizeof(arr));
	memset(follow,0,sizeof(follow));
	sum=0;
	register int i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	req=n/k;
	if(n!=(req*k))
	{ printf("no\n"); return; }
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if((follow[j]+arr[i])<=req)
			{
				follow[j]+=arr[i];
				arr[i]=0;
				break;
			}
		}
	}
	// now check
	bool f=0;
	for(i=0;i<n;i++)
		if(arr[i]) f=1;
	if(!f) printf("yes\n");
	else printf("no\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
