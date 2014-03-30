#include<iostream>
using namespace std;

inline long count(long k)  //counts the number of 1s in the binary representation
{
	int ans=0;
	while(k)
	{
		if(k%2==1) ans++;
		k/=2;
	}
	return ans;
}

int main()
{
	long T,N,A,B;
	long na,nb;
	long ans;
	register int i;
	long pw;
	cin>>T;
	while(T--)
	{
		pw=1;
		ans=0;
		cin>>N>>A>>B;
		na=count(A) ;   nb=count(B);
		na+=nb;
		if(na>N)
			na=2*N-na;
		nb=N-na;
		for(i=0;i<N;i++)
		{
			pw*=2;
			if(i<nb) continue;
			ans+=pw/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}


