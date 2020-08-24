#include<stdio.h>
int main()
{
	int n;
	printf("please enter the number:");
	scanf("%d",&n);
	int num[n+1];
	for(int i=2;i<=n;i++)
	{
		num[i]=1;
	} 
	for(int i=2;i<=n;i++)
	{
		if(!num[i]) 
			continue;
		for(int j=2;i*j<=n;j++)
			num[i*j]=0;
	}
	
	for(int i=2;i<=n;i++)
	{
		if(num[i]==true)
			printf("%d\n",i);
	}
	
	return 0;
	
}
