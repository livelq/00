#include<stdio.h>
int main()
{
	int i,m;
	for(i=100;i<=200;i++)
	{
		for(m=2;m<=i;m++)
		{
			if(i%m==0)
				break;
		}
		if(i==m)
			printf("%d\n",i);
	 } 
}
