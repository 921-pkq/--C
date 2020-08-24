#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("请输入三个点的横纵坐标:");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	int a=x2-x1;
	int b=y2-y1;
	int c=x3-x1;
	int d=y3-y1;
	if(a*d-b*c>0)
		printf("0");
	else
		printf("1");
		
	return 0;
}
