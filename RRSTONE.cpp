#include<iostream>
#include<cstdio>
using namespace std;

inline long int max(long int* arr, int n)
{
	register int i;
	int max=arr[0];
	for( i=1;i<n;i++)
		if( max< arr[i])
			max=arr[i];
	return max;

}

inline void inverse(int* arr1,int* arr2,int m,int n) //m =max, n=no. of elem
{
	register int i;
	for( i=0;i<n;i++)
		arr2[i]=m-arr1[i];
	return ;
}

inline bool is_same(int* arr1,int* arr2,int n)
{
	register int i;
	for( i=0;i<n;i++)
		if( arr1[i]!=arr2[i])
			return false;
	return true;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int* arr=new int[n];
	//unsigned int* arr1,*arr2,*arr3,*arr4,*arr5;
	int* arr1=new int[n];
	int* arr2=new int[n];
	int* arr3=new int[n];
	int* arr4=new int[n];
	int* arr5=new int[n];
	register int i,j;
	for( i=0;i<n;i++)
		cin>>arr[i];
	inverse(arr,arr1,max(arr,n),n);
	inverse(arr1,arr2,max(arr1,n),n);
	inverse(arr2,arr3,max(arr2,n),n);
	inverse(arr3,arr4,max(arr3,n),n);
	inverse(arr4,arr5,max(arr4,n),n);
	if( k==0 )
	{
		for(i=0;i<n;i++)
			printf("%d ",arr[i]);
		cout<<endl;
	}
	else if( k==1)
	{
		for(i=0;i<n;i++)
			printf("%d ",arr1[i]);
		cout<<endl;
	}
	else if( k==2)
	{
		for(i=0;i<n;i++)
			printf("%d ",arr2[i]);
		cout<<endl;
	}
	else if( k==3)
	{
		for(i=0;i<n;i++)
			printf("%d ",arr3[i]);
		cout<<endl;
	}
	else if( k==4)
	{
		for(i=0;i<n;i++)
			printf("%d ",arr4[i]);
		cout<<endl;
	}
	else if( k==5)
	{
		for(i=0;i<n;i++)
			printf("%d ",arr5[i]);
		cout<<endl;
	}
	else if(is_same(arr3,arr5,n))
	{
		// arr5 is after 5 inverstions
		// arr4 after 6 inverstions
		// arr 5 after 7 inverstions
		// arr 4 after 8 inverstions
		// arr 5 after 9 inverstions
		// odd inverstino -> arr5
		// even inverstion -> arr4
		if(k%2==0)
		{
			//print arr4
			for(i=0;i<n;i++)
				printf("%d ",arr4[i]);
			cout<<endl;
		}
		else
		{
			//print arr5
			for(i=0;i<n;i++)
				printf("%d ",arr5[i]);
			cout<<endl;
		}
	}
	else
		cout<<"WRONG ALGO"<<endl;
	return 0;
}



