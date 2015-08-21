#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<stack>
#include<cstring>
using namespace std;


stack<int> st;

inline int scan()
{
  register int n=0;
  register char c;
  c=getchar_unlocked();
  while( c<'0' || c>'9' )
    c=getchar_unlocked();
  while( c>='0' && c<='9' )
    {
      n=n*10+c-'0';
      c=getchar_unlocked();
    }
  return n;
}

bool visited[10000007];   // number of visited nodes

inline void test()
{
  int s,f; int tmp,tmp2,tmp3;
  memset(visited,0,sizeof(visited));
  s=scan(); f=scan();  // s-> initial , f-> final
  register int i,j;
  int curr_level=0;    // stores the curr level number
  int curr_count=0;    // stores the current count of level
  int next_count=0;    // no. of nodes in the next level
  while( !st.empty() )
    st.pop();
  st.push(s);
  st.push(1);
  while( !st.empty() )     // while empty or the number is found
    {
      curr_count=st.top();
      st.pop();
            cout<<"curr count: "<<curr_count<<endl;
      next_count=0;
      while(curr_count--) // for all the nodes in the current level
	{
	  tmp=st.top();
	    cout<<"  popped item :  "<<tmp<<endl;
	  visited[tmp]=true;  
	  st.pop();
	  if( tmp==f  ) 
	    {
	      cout<<curr_level<<endl;    
	      return;
	    }
	  else
	    {
	      //	       cout<<"   else"<<endl;
	      if( tmp%2==0 && (tmp/2)!=0 && !visited[tmp/2] ) 
		{
		  next_count++;
		  st.push(tmp/2);
		}
	      else if( tmp%2==1 && ((tmp-1)/2)!=0 && !visited[(tmp-1)/2] )
		{
		  next_count++;
		  st.push((tmp-1)/2);
		}
	      if( (2*tmp)<=10000000 && !visited[2*tmp] )
		{
		  next_count++;
		  st.push(2*tmp);
		}
	    }
	}
      st.push(next_count);
      //      cout<<"  next_count : "<<next_count<<endl;
      curr_level++;
    } 
}


int main()
{
  int t=scan();
  while(t--)
    test();
  return 0;
}
