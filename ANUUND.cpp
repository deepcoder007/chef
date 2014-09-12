#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<functional>
using namespace std;


int arr[100000];
int arr2[100000];


void test()
{
	int n;
	scanf("%d",&n);	
	register int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	i=0; j=n-1; 
	for(k=0 ; k<n ; k++)
	{
		if( k%2==0 )
		{ arr2[k]=arr[i++]; }
		else
		{ arr2[k]=arr[j--]; }
	}
	printf("%d",arr2[0]);
	for(k=1;k<n;k++)
		printf(" %d",arr2[k]);
	printf("\n");
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
