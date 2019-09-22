#include<stdio.h>
#include<conio.h>

int main()
  {
int a[100],s,i,max=0,k=0,j,b[100],q=0,n=0;
  printf("enter size");
   scanf("%d",&s);
    printf("enter elemrnts");
    for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
        if(a[j]>a[i])
        {
          k=a[j];
          a[j]=a[i];
          a[i]=k;
        }
        }
    }
    for(i=0;i<s;i++)
    {
        q=0;
        for(j=i+1;j<s;j++)
        {
            if(a[i]==a[j])
            {
                q++;
            }
        }
        i=i+q;
        b[n]=++q;
        n++;

    }
    for(i=0;i<s;i++)
    {
    printf("%d",b[i]);
    }
  }
