#include<stdio.h>
int main()
{
    int num,sum=0;
  printf("enter the number upto which you need the find sum");
  scanf("%d",&num);
  for(int i=0;i<=num;i++)
  sum=sum+i;
  printf("%d",sum); 
  return 0;
}