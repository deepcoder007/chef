#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<functional>
#include<cmath>
using namespace std;


int arr[101];


void test()
{
	int k,n;
	register int i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
//	cout<<"ENTER"<<endl;
	int s1=0,s2=0;
		if( k<= n/2 )
		{
			for(j=0;j<k;j++)
				s1+=arr[j];    	
			for(;j<n;j++)
				s2+=arr[j];
		}
		else
		{
			for(j=0;j<(n-k);j++)
				s1+=arr[j];
			for(;j<n;j++)
				s2+=arr[j];
		}
	printf("%d\n",abs(s1-s2));	
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	test();  	}
	return 0;
}
