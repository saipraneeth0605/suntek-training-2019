#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,n,k,b[100]={0},j,z,q;
	printf("enter size");
	scanf("%d",&n);
	printf("enter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the nth max element to find");
	scanf("%d",&k);
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				z=a[i];
				a[i]=a[j];
				a[j]=z;
			}
			
		}
	}
	
		for(i=0;i<n;i++)
		{

		 		if(a[i]==a[i+1])
					{
					   b[q]=a[i+1];
						q++;
						i++;
					}
				else
				{
					b[q]=a[i];
					q++;
				}	
		}
	
	for(i=0;i<n;i++)
	{
	printf("%d\n",b[i]);
	}
	printf("the %dth max element is%d",k,b[k-1]);
}
