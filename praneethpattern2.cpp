#include<stdio.h>
#include<conio.h>
void pattern2(int n)
{
		int i,j,s,k;
	s=0;
	for(i=n;i>0;i--)
	{
		
		for(k=0;k<=(s);k++)
		{
			printf(" ");
		
		}
		for(j=0;j<i;j++)
		{
			printf(" * ");
		}
		printf("\n");
		s++;
	}
}
int main()
{
 	int n;
	printf("enyer n value");
	scanf("%d",&n);
	pattern2(n);
}
