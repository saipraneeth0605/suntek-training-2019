#include<stdio.h>
#include<conio.h>
void pattern(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==1 || j==1 || i==n || j==n || i==j || j==n-i+1)
{
printf("* ");
}
else
printf(" ");
}
printf("\n");
}
}
void pattern();
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
pattern(n);
}

