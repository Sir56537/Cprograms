#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, sub, div, sum, pro, decide;
    printf("would you like to\n1.Subtract\n2.Divide\n3.Sum\n4.Product\nRESPONSE:");
    scanf("%d", &decide);
    printf("num1 : ");
    scanf("%d", &num1);
    printf("num2 : ");
    scanf("%d", &num2);

    sub = num1 - num2;
    div = num1 / num2;
    sum = num1 + num2;
    pro = num1 * num2;
    if (decide == 1)
    {
        printf("Answer = %d", sub);
    }
    if (decide == 2)
    {
        /* code */ printf("Answer = %d", div);
    }
    if (/* condition */ decide == 3)
    {
        /* code */ printf("Answer = %d", sum);
    }
    if (decide == 4)
    {
        printf("Answer = %d", pro);
    }
    return 0;
}
