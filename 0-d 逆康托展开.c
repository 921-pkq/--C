#include<stdio.h>
#define Max 4
const int fact[10] = { 1,1,2,6,24,120,720,5040,40320,362880 };//给出10以内的阶乘 

void revContor(int a[] , int rank) {
	int value, i,flag = 0;
	int b[Max+1];
	rank -= 1;
	for (i = 1; i<Max; i++) {
		value = rank / fact[Max - i];
		rank = rank % fact[Max - i];
		flag = value + 1;
		for (value = 1; value <= Max; value++) {
			if (a[value] != 0)
				flag--;
			if (flag == 0)
				break;
		}
		b[i] = a[value] ;
		a[value] = 0;
	}
	for (value = 1; value <= Max; value++) {
		if (a[value] != 0) {
			b[i] = a[value];
			for (i = 1; i <= Max; i++) {
				printf("%5d", b[i]);
			}
			return ;
		}
	}
}


int main(void) {
	int i;
	int  arrange[Max + 1]; //先定义一个四以内排列,并且忽略0位 
	int  rank = 0;  //排列的序号；

	for (i = 0; i <= Max; i++) {
		arrange[i] = i;
	}
	scanf("%d", &rank);
	revContor(arrange, rank);
	
	return 0;
}
