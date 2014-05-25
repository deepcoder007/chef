#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;


int main()
{
	long int n;
	long int q,r;
	int s;
	cin>>n;
	vector<int> v;
	while(n)
	{
		r=abs(n%2);
		v.insert(v.begin(),r);
		if( r==0 ){ q=n/2;q=-q; }
		else{ q=(n-1)/2;q=-q; }
		n=q;
		//cout<<n<<" : "<<r<<endl;
		//cin>>s;
	}
	if( v.size()==0) cout<<0;
	else
	{
		for(n=0;n<v.size();n++)
			cout<<v[n];
	}
	cout<<endl;
	return 0;
}
