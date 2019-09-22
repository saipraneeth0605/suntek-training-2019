#include<stdio.h>
#include<conio.h>
 int count2(int *a,int n)
  {
    int i=0,k=0,max=0,b[100],j=0;
    max=a[0];
     for(i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           k=max;
           max=a[i];
           a[i]=k;
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
       // b[j]=a[i];
       // j++;
    }
    return b[j];
  }
 int main()
  {
int a[100],s,i,d;
  printf("enter size");
   scanf("%d",&s);
    printf("enter elemrnts");
    for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
   d=count2(a, s);
    printf("%d",d);
 }


