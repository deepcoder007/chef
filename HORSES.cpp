#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int T , N,n, m, i,j;
	cin>>T;
	while(T--){
	        m=1000000000;
		cin>>N;
		int a[N];
		for(n=0; n < N; n++) cin>>a[n];
		sort(a, a+N);
		for(n=0; n < N-1; n++){
			i = a[n], j = a[n+1];
			if(i == j){
				m = 0;
				break;
			}else if(i < j && j - i < m) m = j - i;
			else if(i > j && i - j < m) m = i - j;
		}
		printf("%d\n",m);
	}
return 0;
}
 

