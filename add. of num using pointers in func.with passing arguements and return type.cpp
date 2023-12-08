#include<stdio.h>//call by reference
int f(int *a,int*b)//formals parameters
{
	int c=*a+*b;
	return c;
}
int main()
{
	int x,y;
	printf("enter the value of numbers you want to add");
	scanf("%d%d",&x,&y);
	
	int p=f(&x,&y);//actual parameters
	printf("addtion is -: %d",p);
}
