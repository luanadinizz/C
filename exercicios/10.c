#include <stdio.h>
#include <stdlib.h>

void main()
{
    int sal,perc,aumen,novosal;
    printf("insira o salario atual");
    scanf("%d",&sal);
    printf("insira o percentual de aumento");
    scanf("%d",&perc);
    aumen=(sal*perc)/100;
    printf("o aumento do salario foi de %d",aumen);
    novosal=sal+aumen;
    printf("o novo salario e %d",novosal);

}
