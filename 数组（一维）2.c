/*求最大值及其下标。输入一个正整数n(1<n<=10),再输入n个整数，输入最大值及其对应的最小下标，下标从0开始。
*/
#include<stdio.h>
int main(void)
{
   int n,i,index,t;
   int a[10];
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   index=0;
   for(i=1;i<n;i++)
	   if(a[i]>a[index])
		   index=i;
   printf("Max is %d,index is %d\n",a[index],index);
   t=a[n-1];
   a[n-1]=a[index];
   a[index]=t;
   printf("After swap:");
   for(i=0;i<0;i++)
	   printf("%d",a[i]);
   printf("\n");
   return 0;
}
