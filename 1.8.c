#include<stdio.h>

int main(void)
{
	
	int input=0;
	int sum=0;
	int zei=0;
	
	printf ("消費税抜き価格を入力してください.\n");
	scanf("%d",&input);

	sum=input*1.08;
	zei=input*0.08;

	printf("税込み価格=%d円",sum);
	printf("税額=%d円",zei);

	return 0;
}