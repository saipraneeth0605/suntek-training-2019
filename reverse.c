#include<stdio.h>
#include<conio.h>
int reverse(int n)
{
    int k=0,r=0;
 while(n!=0)
    {
        k=n%10;
        r=r*10+k;
        n=n/10;
    }
    return r;
}
int main()
{
    int n,r=0;
    printf("enter number");
    scanf("%d",&n);
    r=reverse(n);
    printf("%d",r);
}
