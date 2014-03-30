#include<iostream>
#include<algorithm>
using namespace std;

int sum(int* arr, int beg, int end)  //both inclusive
{
	int s=0;
	for(int i=beg;i<=end;i++)
	{ s+=arr[i]; }
	return s;
}

int main()
{
	int t;
	int n,x;
	register int i;
	int* arr;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		arr=new int[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		if(  (int)(sum(arr,0,n-1)/x)==(int)(sum(arr,1,n-1)/x) )
		{   cout<<-1<<endl; }
		else {  cout<<(int)(sum(arr,0,n-1)/x)<<endl;  }
		delete [] arr;
	}
	return 0;
}
		
