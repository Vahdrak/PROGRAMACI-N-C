#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1)
    {
        /* Terminating case */
        return y;
    }
    else if (x > 1)
    {
        /* Recursive step */
        return y + multiply(x-1, y);
    }

    /* Catch scenario when x is zero */
    return 0;
}

int main() {
    int a=0 , b=0;
    printf("Introduce dos enteros separados por un espacio: \n");
    scanf("%d %d", &a, &b);
    printf("%d times %d is %d",a ,b, multiply(a, b));
    return 0;
}