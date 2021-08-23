#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("digite um numero\n");
    scanf("%d",&x);
    if (x%2==0)
        printf("o numero e par");
    else
        printf("o numero e impar");
    return 0;
}
