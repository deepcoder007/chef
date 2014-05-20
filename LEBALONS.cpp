#include<iostream>
#include<cstdio>
using namespace std;

// using 1-array
int C[41];
int P[41];
float arr[41][41];   //stores the expected value
bool col[41][41][41];  //stores the colours used  true if the colour is used


void test()
{
	int n;   //no. of items
	register int i,j,k;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			for(k=1;k<=n;k++)
				col[i][j][k]=false;
	cin>>n;
	for( i=1;i<=n;i++)
		cin>>C[i]>>P[i];
	//initialize base case
	arr[1][1]=P[1];
	col[1][1][1]=true;
	for( i=2;i<=n;i++)
	{
		arr[1][i]=0;
	}






int main()
{
	int t;
	cin>>t;
	while(t--)
		test();
	return 0;
}
