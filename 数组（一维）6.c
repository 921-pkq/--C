/*输入一个以回车结束的字符串（少于80个字符），统计并输出其中大写辅音字母的个数（大写辅音字母除'A''E''I''O''U'以外的大写字母）*/
#include<stdio.h>
int main(void)
{
   int count,i;
   char ch,str[80];
   printf("Input a string:");
   i=0;
   while((ch=getchar())!='\n'){
	   str[i++]=ch;
   }
   str[i]='\0';
   count=0;
   for(i=0;str[i]!='\0';i++)
	   if(str[i]<='Z'&&str[i]>'A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
		   count++;
   printf("count=%d\n",count);
   return 0;
}
