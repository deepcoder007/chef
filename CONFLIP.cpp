#include<iostream>
using namespace std;

int main()
{
	int T,G,N,I,Q;
	int ans; 
	cin>>T;
	while(T--)
	{
		cin>>G;
		while(G--)
		{
			cin>>I>>N>>Q;
			ans=N/2;
			if(I==Q)  cout<<ans<<endl;
			else cout<<  (N-ans)  <<endl; 
		}
	}
	return 0;
}

