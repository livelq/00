#include<stdio.h>
int main()
{
	int i,m,t;
	for(i=2;i<=500;i++)
	{
		t=0;             /*Ҫ��t=0����ѭ���ڲ���������ѭ��������ȫ��һ����*/ 
		for(m=1;m<=i/2;m++)
		{
			if(i%m==0)
			{
				t=t+m;
			}
		}
	if(t==i)
		printf("%d\t",i);
	}
}
