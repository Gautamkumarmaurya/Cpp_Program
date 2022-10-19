#include<stdio.h>
int main()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  x=x%10;
  printf("unit digit :%d\n",x);
  return 0;
}
