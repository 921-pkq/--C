#include <stdio.h>
int main()
{
	int a,b,m;//m为余数
	printf("please enter the numbers:");
	scanf("%d%d",&a,&b);
	m=a%b; 
	while(m!=0)
	{
		a=b;
		b=m;
		m=a%b;
	}
	printf("The greatest common divisor is %d\n",b);
	return 0; 
} 
