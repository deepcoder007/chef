#include<cstdio>
using namespace std;


int main()
{
	int n;
	int tmp;
	scanf("%d",&n);  //the no. of elements
	int curr=0;
	int max=0;
	while(n--)
	{
		scanf("%d",&tmp);
		if( tmp==0 )
		{
			if( curr>max ) max=curr;
			curr=0;
		}
		else 
		{
			curr++;
		}
	}
	if( curr>max ) max=curr;
	printf("%d\n",max);
	return 0;
}

