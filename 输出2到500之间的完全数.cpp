#include<stdio.h>
int main()
{
	int i,m,t;
	for(i=2;i<=500;i++)
	{
		t=0;             /*要把t=0放在循环内部！！放在循环外是完全不一样的*/ 
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
