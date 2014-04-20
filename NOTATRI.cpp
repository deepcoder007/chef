#include<stdio.h>
        void quicksrt(int *arr,int start ,int end)
        {
        	int i, j,key;
        	key = arr[(start + end)/2];
        	i = start;
        	j = end;
        	do
        	{
        	while( arr[i] < key ) i++;
        	while(arr[j] > key) j--;
        	if(i<=j){
        	int temp = arr[i];
        	arr[i] = arr[j];
        	arr[j] = temp;
        	i++;
        	j--;
        	}
        		}while(i<=j);
        	if(start < j)
        	quicksrt(arr,start,j);
         if(i<end)
        	quicksrt(arr,i,end);
        }
        
        int main()
        {
            int arr[2000] = {0};
        	while(1)
        	{
        	int cases,i;
        	scanf("%d",&cases);
        	if(cases == 0)
        	{
        		break;
        	}
        	
        	for(i=0;i<cases;i++)
        	{
        		scanf("%d",&arr[i]);
        	}
        	quicksrt(arr,0,cases-1);
        	int count = 0;
        	for(i = cases-1;i >= 2;i--)
        	{
        		int l = 0;
        		int r = i - 1;
        		while(l<r)
        		{
        			if(arr[l] + arr[r] < arr[i])
        			{
        				count += r-l;
        				l++;
        			}
        			else
        				r--;
        		}
        
        	}
        	printf("%d\n",count);
        	}
        	return 0;
        }
 
