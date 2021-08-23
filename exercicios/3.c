#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int x,y,z;
    printf("digite tres numeros");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y>z)
        printf("a ordem crescente e o primeiro numero, o segundo e depois o terceiro");
    else if(y>x>z)
    printf("a ordem crescente e o segundo,o primeiro e depois o terceiro");
    else if(x>z>y)
    printf("a ondem crescente e o primeiro,o terceiro e depois o segundo");
    else if(y>z>x)
    printf("a ordem crescente e o segundo,o terceiro e depois o primeiro");
    else if(z>y>x)
    printf("a ordem crescente e o terceiro,o segundo e depois o primeiro");
   else
    printf("a ordem crescente e o terceiro,o primeiro e depois o segundo");
}
