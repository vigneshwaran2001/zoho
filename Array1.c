/*

5
[1 ,2 ,3 ,4 ,5]//add an array of even numbers excluding the odd number that occurs after even number
7
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int sum=0;
	sum=a[0];//because for first number there is before no even number
	for(int i=1;i<n;i++)
	{
		if(a[i]%2==1 && a[i-1]%2==0)
		{
			continue;
		}
		else
		{
			sum=sum+a[i];
		}
	}
	printf("%d",sum);
}
