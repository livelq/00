#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)  /*枚举法循环是确定范围，分支确定符合的条件*/ 
	{
		if(i%3!=0&&i%7!=0)
		printf("%d\t",i);
	}
}
