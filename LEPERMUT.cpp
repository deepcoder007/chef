#include<iostream>
using namespace std;
	
int arr[111];

inline void test()
{
	int N;
	register int i;
	cin>>N;
	for(i=1;i<=N;i++)
		cin>>arr[i];
	bool tf=true;
	for(i=1;i<=N;i++)
	{
		if( (i - arr[i]) >1 || ( arr[i] - i) >1 )
			tf=false;
	}
	if( tf )
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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
