#include <stdio.h>
#include <stdlib.h>

/*A serie de Fibonacci e: 1; 1; 2; 3; 5; 8; 13; : : :
Ou seja, o n-esimo termo e a soma dos dois anteriores
F(n) = F(n - 1) + F(n - 2)
tal que F(1) = 1 e F(2) = 1.*/
int main()
{
    int n,v[25],atual,n0, n1, n2, temp, i;
    n0 = 0;
    n1 = 1;
    n2 = 1;
    v[0] = 0;
    v[1] = 1;
    v[2] = 1;

    for (i = 3; i < 25; i++)
    {
        atual = n1 + n2;
        v[i] = atual;
        n2 = n1;
        n1 = atual;
    }
    for (i = 0; i < 25; i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}


/*
int main()
{
   long int num,n,v[25],atual,n0, n1, n2, temp, i;
    n0 = 0;
    n1 = 1;
    n2 = 1;
    v[0] = 0;
    v[1] = 1;
    v[2] = 1;
    printf("SEQUENCIA DE FIBONACCI\n");
    printf("digite um numero:");
    scanf("%d",&num);

    for (i = 3; i < num; i++)
    {
        atual = n1 + n2;
        v[i] = atual;
        n2 = n1;
        n1 = atual;
    }
    for (i = 0; i < num; i++)
    {
        printf("%d\n",v[i]);
    }

    return 0;
}
*/
