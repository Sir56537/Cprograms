//write a c program that prints the perimeter of a rectangle to take its heights and width as input//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int length, width, product, perimeter, productw, productl;
    printf("please insert length and width respectivly in CM\n");
    printf("length : \n");
    scanf("%d", &length);
    printf("width : \n");
    scanf("%d", &width);
    productl = 2 * length;
    productw = 2 * width;
    perimeter = productl + productw;
    printf("the perimiter is :\n%dCm", perimeter);
    return 0;
}
