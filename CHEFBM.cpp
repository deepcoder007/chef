#include<map>
#include<set>
#include<iostream>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;

struct inc  //increment
{
	int row;
	int col;
	bool operator < ( inc tmp ) const  //for sorting the array
	{
		if (row==tmp.row) return col<tmp.col;
		else return row<tmp.row;
	}
};

inc increment[100000];
int ans[100000];   //the final answer to be printed

int main()
{
	int tk;
	int n,m,p;
	cin>>n>>m>>p;
	register int i,j;
	int t1,t2;
	for( i=0; i<n; i++)
	{
		ans[i]=m-1;
	}
	for( i=0 ; i<p; i++)
	{
		cin>>t1>>t2;
		increment[i].row=t1;
		increment[i].col=t2;
		if( t2==m )  ans[t1-1]++;
		if( t2==1) ans[t1-1]--;
	}
	sort(increment, increment+p);
	
	//algo starts from here
	int curr=1;   //the current row
	map<int,int> counter; //to track the additions
	set<int> s;   //stores the column number at which the element is adde
	set<int>::iterator it;
	
	for( i=0;i<p;i++)  //for each addition
	{
		if( curr!=increment[i].row )   //reset all parameters
		{
			// row changed -> process the previous row
			for( it=s.begin() ; it!=s.end() ; it++)
			{
				// * it is col number and curr is row number
				if( (*it)!=m && (counter[*it]-counter[*it+1])>1 )  //error
				{
					ans[curr-1]=-1;
				}
			}
			counter.clear();
			s.clear();
		        curr=increment[i].row;
		}
		counter[ increment[i].col ]++;
		s.insert( increment[i].col);
	}
	for( it=s.begin() ; it!=s.end() ; it++)
	{
		if( (*it)!=m && (counter[*it]-counter[*it+1])>1 )  //error
		{
			ans[curr-1]=-1;
		}
	}
	for(i=0;i<n;i++)
		cout<<ans[i]<<endl;
	return 0;
}



	

