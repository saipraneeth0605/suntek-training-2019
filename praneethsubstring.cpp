#include<stdio.h>
int check(char* str,char* sub)
{
  int i, j=0, k;
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;

       if(!sub[j])
        {
        printf("Substring");
        return 0;
        }
    }
  }
  printf("Not a substring");
 return 0;

}
int main()
{
char str[100],sub[100],r[20];
printf("enter string ");
scanf("%s",str);
printf("enter substring ");
scanf("%s",sub);
check(str,sub);
}

