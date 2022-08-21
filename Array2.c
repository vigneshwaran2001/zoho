/*
5
11, 31, 4, 3, 9
11, 3, 9, 31, 4
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int odd[1000],even[1000],o=0,e=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0){
			odd[o++]=a[i];
		}
		else
		{
			even[e++]=a[i];
		}
	}
	
	for(int i=0;i<o-1;i++)
	{
		for(int j=0;j<o-i-1;j++)
		{
			if(odd[j]<odd[j+1])
			{
				int t=odd[j];
				odd[j]=odd[j+1];
				odd[j+1]=t;
			}
		}
	}
		for(int i=0;i<e-1;i++)
	{
		for(int j=0;j<e-i-1;j++)
		{
			if(even[j]>even[j+1])
			{
				int t=even[j];
				even[j]=even[j+1];
				even[j+1]=t;
			}
		}
	}
	/*for(int i=0;i<o;i++)
	{
		printf("%d ",odd[i]);
	}
	for(int i=0;i<e;i++)
	{
		printf("%d ",even[i]);
	}*/
	int k=0;
	int t=0;
	for(int i=0;i<n;i++)
	{//int k=0;
		if(i%2==0){
			
			printf("%d ",odd[k++]);
			
		}
		else if(i%2!=0)
		{
			
			printf("%d ",even[t++]);
		}
	}
	
}
