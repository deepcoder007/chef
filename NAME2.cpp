#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

void test()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	register int i,j;
	if( str1.size()<=str2.size()	)
	{
		for( i=0, j=0; i<str1.size(); i++)
		{
			while(str1[i]!=str2[j] && j<str2.size())
				j++;
			if( j==str2.size() )
				break;
		}
		if( i==str1.size() )
		{ printf("YES\n"); }
		else
		{	printf("NO\n");  }	
	}
	else
	{
		for(j=0,i=0; j<str2.size() ; j++ )
		{
			while( str1[i]!=str2[j] && i<str1.size() )
				i++;
			if( i==str1.size() )
				break;
		}
		if( j==str2.size() )
		{	printf("YES\n");  	}
		else
		{	printf("NO\n");		}
	}
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
