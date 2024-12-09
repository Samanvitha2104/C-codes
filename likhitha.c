#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a,b:");
	scanf("%d%d",&a,&b);
	printf("Assignment operators\n");
	printf("add assignment operator is %d\n",(a+=b));
	printf("minus assignment operator is %d\n",(a-=b));
	printf("multiple assignment operator is %d\n",(a*=b));
	printf("modulus assignment operator is %d\n",(a%=b));
	printf("divide assignment operator is %d\n",(a/=b));
	printf("Relational operator\n");
	printf("greater than operator is %d\n",(a>b));
	printf("less than operator is %d \n",(a<b));
	printf("less than or equal to is %d \n",(a>=b));
	printf("greater than or equal to is %d\n",(a<=b));
	printf("equal to operator is %d \n",(a==b));
	printf("not equal to operator is %d\n",(a!=b));
	printf("Conditional operator \n");
	printf("conditional operator is %d \n",(a>b?printf("true"):printf("false")));
}
