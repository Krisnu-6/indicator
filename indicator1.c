#include<stdio.h>

main()
{
	int a,b,temp;
	printf("enter A value = ");
	scanf("%d",&a);
	printf("enter B value = ");
	scanf("%d",&b);
	
	int *p,*p1;
	
	p = &a;
	p1 = &b;
	
	temp = *p;
	*p = *p1;
	*p1 = temp;
	
	printf("swapping value A = %d\n",*p);
	printf("swapping value B = %d",*p1);
	 
}