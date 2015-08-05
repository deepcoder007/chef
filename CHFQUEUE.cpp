#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int n,k;
int arr[1000009];  

int main()
{
  register int i,j;
  cin>>n>>k;
  for(i=0;i<n;i++)
    cin>>arr[i];
  int long long fear=1;
  bool better;
  int mi , mv;
  mi= n-1; mv=arr[n-1];
  for(i=n-2;i>=0;i--)
    {
      if(mv<arr[i])
	{
	  fear=(fear*(mi-i+1))%1000000007;
	}
      else
	{
	  mi=i;
	  mv=arr[i];
	}
    }
  cout<<fear<<endl;
  return 0;
}
