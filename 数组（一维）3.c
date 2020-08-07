/*输入一个正整数n(1<n<=10),再输入n个整数，将它们从大到小排序后输出*/
#include<stdio.h>
int main(void)
{
	int index,i,k,n,temp;
	int a[10];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input%dintegers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(k=0;k<n-1;k++){
		index=k;
		for(i=k+1;i<n;i++)
			if(a[i]>a[index]) index=i;
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;
	}
	printf("After sorted:");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}
