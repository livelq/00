#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)  /*ö�ٷ�ѭ����ȷ����Χ����֧ȷ�����ϵ�����*/ 
	{
		if(i%3!=0&&i%7!=0)
		printf("%d\t",i);
	}
}
