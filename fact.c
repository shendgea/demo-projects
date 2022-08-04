#include<stdio.h>
main()
{
int fact=1,n,i;
  printf("enter fact");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
