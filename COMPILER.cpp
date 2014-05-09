#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	int n;
	cin>>n;
	register int i,s;
	int tmp;
	int score;
	int longest;

	while(n--)
	{
		longest=0;
		score=0;     //no. of < without and >
		cin>>str;
		s=str.size();
		for( i=0 ; i<s && score>=0 ;i++)
		{
			if( str[i]=='<')
				score++;
			else if(str[i]=='>')
				score--;
			else
				cout<<"ERROR"<<endl;
			if( score==0 )
				longest=i+1;
			else if ( score<0)
				break;
		}
		cout<<longest<<endl;
	}
	return 0;
}
