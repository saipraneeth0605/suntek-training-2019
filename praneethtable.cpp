#include<stdio.h>
#include<conio.h>
int table(int n,int i)
{
	int d[100],j,k;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
	
int main()
{
	int n,i,d;
	printf("enter table value");
	scanf("%d",&n);
	d=table(n,i);

}
