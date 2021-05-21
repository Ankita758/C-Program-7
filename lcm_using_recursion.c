#include<stdio.h>
int lcm(int,int);
int main()
{
	int n1,n2,r;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	r=lcm(n1,n2);
	printf("LCM of %d and %d= %d",n1,n2,r);
	return 0;	
}
int lcm(int x,int y)
{
	static int i=1;
	if(i%x==0&&i%y==0)
		return i;
	else
	{
		i++;
		lcm(x,y);
		return i;
	}
}
