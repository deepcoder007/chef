#include<iostream>
#define init int i,j,k,l,m,n,test
#define mod 1000000007
int a[1000001],fear[1000001];
using namespace std;

int main()
{ 
  int flag;
  long long ans;
  init;  
  cin>>n>>k;
  for(i=0;i<n;i++) 
    cin>>a[i];
  
  for(i=0;i<n-1;i++)
   {
     flag=0;
     for(j=i+1;j<n;j++)
       {
	 if(a[j]<a[i])
	   {
	     fear[i]=j-i+1;
	     flag=1;
	     break;
	   }                  
       }
     if(flag==0)
       fear[i]=1;
   }
  ans=1;
  for(i=0;i<n-1;i++)
  ans=(ans*fear[i])%mod;
  cout<<ans;
  //system("pause");
  return 0;    
}
 
