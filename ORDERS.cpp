#include<iostream>
#include<vector>
using namespace std;


inline void test()
{
	int n;
	cin>>n;
	register int i;
	vector<int> v;  //the master vector
	int tmp;
	vector<int>::reverse_iterator it;
	register int j;
	for(i=1;i<=n;i++)
	{
		cin>>tmp;
		it=v.rbegin();
		for(j=0;j<tmp;j++)
			it++;
		v.insert(it,i);
	//	v.insert(v.size()-tmp,i);
	}
	vector<int>::iterator it1;
	for( it1=v.begin(); it1!=v.end() ; it1++ )
	{
		cout<<*it1<<" ";
	}
	cout<<endl;

}


int main()
{
	int T;
	cin>>T;
	while(T--)
		test();
	return 0;
}
