#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	int k;      //no . of players to be selected
	int arr[11];
	register int i;
	register int count;
	register int count2;
	register int result;
	cin>>t;
	while(t--)
	{
		for(i=0;i<11;i++)
			scanf("%d",&arr[i]);
//			cin>>arr[i];
		cin>>k;
		sort(arr,arr+11);
		//count the multiplicity of arr[11-k];
		count=0;
		for(i=0;i<11;i++)
			if( arr[i]==arr[11-k])
				count++;
		//no. of to be selected
		count2=0;
		for(i=11-k;i<11 && arr[i]==arr[11-k] ; i++)
			count2++;
		//no calc result;
		result=1;
		for(i=0;i<count2;i++)    // i.e. PNC
		{ result=result*(count-i)/(i+1); }
		cout<<result<<endl;
	}
	return 0;
}



