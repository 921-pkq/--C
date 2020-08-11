/*输入一个以回车结束的字符串（少于80字符），将该字符串按逆序输出*/
#include<stdio.h>
int main(void)
{
	int i,k,temp;
	char str[80];
	printf("Input a string:");
	i=0;
	while((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';
	k=i-1;
	for(i=0;i<k;i++){
		temp=str[i];
		str[i]=str[k];
		str[k]=temp;
		k--;
	}
	for(i=0;str[i]!='\0';i++)
		putchar(str[i]);
	return 0;
}
