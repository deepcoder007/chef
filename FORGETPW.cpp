#include<iostream>
#include<string>
#include<cstdio>
#include<map>
using namespace std;



int main()
{
	map<char,char> m;
	int t;
	scanf("%d",&t);
	int n;
	char a1,a2;
	string in,out;
	int i,j;
	while(t--)
	{
		o=0;
		m.clear();
		out.clear();
		scanf("%d\n",&n);
		while(n--)
		{
			scanf("%c %c\n",&a1,&a2);
			m[a1]=a2;
		}
		cin>>in;  //input the string
		for(i=0;i<in.size();i++)
		{
			if( m[in[i]]==(char)NULL )
			{
				out.push_back(in[i]);
			}
			else
			{
				out.push_back(m[in[i]]);
			}
		}
	}
	return 0;
}
		


