#include<stdio.h>
#include<math.h>
int PowMod(int n, int p,int m)
{
	if (p == 1)
	{
		return n % m;
	}
	int temp = pow(n, p/2);// pow(x,y) 函数用来求 x 的 y 次方的值。
	int result = (temp*temp) % m;
	if (p % 2 == 1)
	{
		result = (result*n) % m;
	}
	return result;
}

int main()
{
	int n,p,m,sum;
	printf("please enter the n,p,m:");
	scanf("%d%d%d",&n,&p,&m);
	sum=PowMod(n,p,m);
	printf("The result is %d\n",sum);
	
	return 0;
}
