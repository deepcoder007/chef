#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<set>
using namespace std;

set<int> s;

inline void test()
{
	int n;
	int tmp;
	s.clear();
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&tmp);
		s.insert(tmp);
	}
	printf("%ld\n",s.size());

}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
