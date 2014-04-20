#include<iostream>
#include<string>
#include<map>
using namespace std;


inline void test()
{
	map<string,char> data;
	int N;
	cin>>N;
	string tmp; char c;
	register int i;
	for( i=0; i<N;i++)
	{
		cin>>tmp>>c;
		data[tmp]=c;
	}
	int score=0;
	map<string,char>::iterator it;
	for(it=data.begin(); it!=data.end() ; it++)
	{
		if(it->second=='+') score++;
		else score--;
	}
	cout<<score<<endl;
	return;
		
}

int main()
{
	int T;
	cin>>T;
	while(T--)
		test();
	return 0;
}
