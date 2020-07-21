/*输入一个正整数n（1<n<=10）,再输入n个整数，输出平均值（保留2位小数）*/
#include<stdio.h>
int main(void)
{
   int i,n,sum;
   float aver;
   int a[10];
   printf("Input n:");
   scanf("%d",&n);
   printf("Input %d integers:",n);
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
   sum=0;
   for(i=0;i<n;i++)
       sum=sum+a[i];
   aver=1.0*sum/n;
   printf("Average=%.2f\n",aver);
   return 0;
}
