#include<iostream>
using namespace std;


int main()
{
	int t,n,ans;
	cin>>t;
	int x;
	while(t--)
	{
		cin>>n;
		x=(int)(n/7);
		while(x)
		{
			if( (n-7*x)%4==0)
				 break;
			x--;
		}
		if(x>0)cout<<x*7<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}


