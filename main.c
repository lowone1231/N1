#include <stdio.h>

int main()
{
 int amount=0;
 int price=0;
 printf("请输入金额：\n");
 scanf("%d",& price);
 printf("请输入票面：\n");
 scanf("%d",& amount);
 int change=0;
 change=amount-price;
 printf("找您%d元\n",change);
 return 0;
}
