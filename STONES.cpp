#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string A;
	string B;
	int ans;
	register int i;
	int freq1[100];
	int freq2[100];
	while(t--)
	{
		cin>>A;
		cin>>B;
		ans=0;
		//now measure thre freq
		for(i=0;i<100;i++)
		{ freq1[i]=freq2[i]=0; }
		for(i=0;i<A.size();i++)
			freq1[A[i]-'A']++;
		for(i=0;i<B.size();i++)
			freq2[B[i]-'A']++;
		for(i=0;i<100;i++)
		{
			if( freq1[i]>0 )
			{
				ans+=freq2[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

