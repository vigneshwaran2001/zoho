#include<stdio.h>
int main()
{
	int n,isprime=0,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0){
			isprime=1;
			for(int j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					isprime=0;
					break;
				}
			}
			if(isprime==1)
			{
				if(i==2||i==3||i==5)
				{
					flag=0;
				}
				else
				{
					flag=1;
					break;
				}
				
			}
			
		}
		
	}
	if(flag==0)
	printf("true");
	else
	printf("false");
}
