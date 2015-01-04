#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<set>
#include<cstring>
using namespace std;

vector< set<int> > sum_list;    // the list of sets which have sum equal to the required value
bool curr[25];   // stores the current points under scanner its the mask
int cur_sum;
int req;
int n,k;
int arr[25];   // to store the intensity

inline bool state_check() // returns true if all the states are used
{
	for(register int i=0;i<n;i++)
		if(!curr[i])
			return false;
	return true;
}

inline bool uinit(int a)    // here index of list sum_list
{
	if(a>=sum_list.size()) return false;
	if(uinit(a+1)) return true;    // in case the magic sequence is found
	register int i,j;
	set<int>::iterator it;
	bool flag=0;
	
	for(it=sum_list[a].begin() ; it!=sum_list[a].end(); it++ )
		if( curr[*it] ) flag=1;
	if(!flag)   // i.e. no conflict 
	{
		for(it=sum_list[a].begin(); it!=sum_list[a].end() ;it++)
			curr[*it]=true;
		if(state_check()) return true;
		else if(uinit(a+1)) return true;
		for(it=sum_list[a].begin(); it!=sum_list[a].end() ;it++ )
			curr[*it]=false;
	}
	return false;

}

		
inline void check()
{
//	cout<<"----------------------Entering the checking phase--------------- "<<endl;
	register int i,j;
	memset(curr,0,sizeof(curr));
	if(uinit(0)) printf("yes\n");
	else printf("no\n");
} 

inline void record_state()    // record the current state of curr in the sum_list CAUTION: records the index  
{
	set<int> tmp;
	for(register int i=0;i<n;i++)
		if(curr[i])
			tmp.insert(i);
	sum_list.push_back(tmp);
}

inline void init(int a)   // initialize considering cases from index [a..n]
{
	register int i;
	if(a>=n) return;
	init(a+1);      // once with curr[i]=false
	curr[a]=true;
	cur_sum+=arr[a];
	if(cur_sum==req)  record_state();
	else if( cur_sum < req ) init(a+1);
	curr[a]=false;
	cur_sum-=arr[a];
}


inline void test()
{
	int sum=0;
	register int i,j;
	sum_list.clear();
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		sum+=arr[i];
	req=sum/k;
	memset(curr,0,sizeof(curr));
	// initialize sum_list
	if(sum==(req*k))
	{
		init(0);
		check();   // check and print yes or no accordingly
	}
	else printf("no\n");
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		test();
	return 0;
}
