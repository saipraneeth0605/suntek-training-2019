#include<stdio.h>
#include<conio.h>
 int count(int *a,int n, int c)
  {
    int i,k=0;
     for(i=0;i<n;i++)
    {
       if(a[i]==c)
        {
           k++;
        }
        else
            k=-1;
    }
 return k;
  }
// void main()
  {
int a[100],s,i,g,d;
  printf("enter size");
   scanf("%d",&s);
    printf("enter elemrnts");
    for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
  printf("enter element to count");
   scanf("%d",&g);
   d=count(a, s, g);
    printf("%d",d);
 }

