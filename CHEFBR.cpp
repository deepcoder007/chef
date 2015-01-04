#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<stack>
using namespace std;
#define mod 1000000007


int n;
int arr[101];
bool mask[101]; 
int count;       // the number of sub-seq stacks that are 
stack<int> stk;

bool isbalanced()   // returns true if the current masked bracket is balanced
{
	while(!stk.empty()) stk.pop();
	register int i;
	for(i=0;i<n;i++)
	{
		if(mask[i])  // if current element is in the list
		{
			if(arr[i]<0) stk.push(arr[i]);
			else
			{
				if(!stk.empty() && stk.top()== (-arr[i]) ) {   stk.pop() ; }
				else return false;
			}
		}
	}
	if(stk.empty()) return true;
	else false;
}

inline void perm(int a)
{
	register int i;
	if( a>=n  )
	{ 
		if(isbalanced())
		{ count++; count%=mod;
//		cout<<"MASK :  ";
//		for(i=0;i<n;i++)
//			if(mask[i])
//				cout<<arr[i]<<"  ";
//		cout<<endl;
		
		
		}
		return; 
	}
	mask[a]=true;
	perm(a+1);
	mask[a]=false;
	perm(a+1);

}

inline int  getcount()
{
	count=0;
	memset(mask,0,sizeof(mask));
	perm(0);
	return count;
}


 
int main()
{
	register int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("%d\n",getcount());
	return 0;
}

