/*输入一个正整数n（1<n<=10）,再输入n个整数,按逆序输出这些数*/
#include<stdio.h>
int main(void)
{
	int i,n,temp;
	int a[10];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d Integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("After reversed:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
