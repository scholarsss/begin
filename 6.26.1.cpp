#include<stdio.h>
int main()
{
	int a,b;
	long c;
	int x1,x2,x3,x4;
	scanf("%d,%d",&a,&b);
	  x1=a/10;
	  x2=a%10;
	  x3=b/10;
	  x4=b%10;
	  c=x4*1000+x2*100+x3*10+x1;
	  printf("c=%d\n",c);
	  return 0;
}
