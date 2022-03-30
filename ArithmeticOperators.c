#include<stdio.h>
void main()
{
	int a,b,ans=0;
	printf("Enter the number a and b:");
	scanf("%d%d",&a,&b);
	ans=a+b;
	printf("\n Addition=%d",ans);
	ans=a-b;
	printf("\n Subtraction=%d",ans);
	ans=a*b;
	printf("\n Multiplication=%d",ans);
	ans=a/b;
	printf("\n Division=%d",ans);
	ans=a%b;
	printf("\n Modulo=%d",ans);
}