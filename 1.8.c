#include<stdio.h>

int main(void)
{
	
	int input=0;
	int sum=0;
	int zei=0;
	
	printf ("����Ŕ������i����͂��Ă�������.\n");
	scanf("%d",&input);

	sum=input*1.08;
	zei=input*0.08;

	printf("�ō��݉��i=%d�~",sum);
	printf("�Ŋz=%d�~",zei);

	return 0;
}