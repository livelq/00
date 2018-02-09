#include<stdio.h>
int main()
{
	int a,b,c,i;
	a=1;b=1;
	printf("%d\t%d\t",a,b);
	for(i=3;i<=30;i++)
	{
		c=a+b;    /*µü´ú·¨f=f1+f2;f1=f2;f2=f;*/ 
		printf("%d\t",c);
		a=b;b=c;
	}
}
