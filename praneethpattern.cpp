#include<stdio.h>
#include<conio.h>
void pattern(int n)
{
	int i,j,s,k;
	s=n;
	for(i=0;i<n;i++)
	{
		
		for(k=0;k<=(s);k++)
		{
			printf(" ");
		
		}
		for(j=0;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		s--;
	}
}
int main()
{
	int n;
	printf("enyer n value");
	scanf("%d",&n);
    pattern(n);
}
