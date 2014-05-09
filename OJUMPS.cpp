#include<iostream>
#include<cstdio>
#include<cstdint>
using namespace std;



int main()
{
	int64_t n;
	cin>>n;
	n=n%6;
	if( n==0 || n==1 || n==3 )
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
