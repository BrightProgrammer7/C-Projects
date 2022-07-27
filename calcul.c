#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int somme(int, int);
int produit(int, int);

int somme(int a, int b)
{
    return (a + b);
}

int produit(int a, int b)
{
    return (a * b);
}

int main(int argc, char *argv[])
{
    int a, b;

    if (argc != 4)
    {
        printf("\nErreur : nombre invalide d'arguments");
        printf("\nUsage: %s int [plus|fois] int\n", argv[0]);
        return (EXIT_FAILURE);
    }
    a = atoi(argv[1]);
    b = atoi(argv[3]);

    bool c1 = !strcmp(argv[2], "plus") || strcmp(argv[2], "plus") == 0;
    bool c2 = !strcmp(argv[2], "fois") || strcmp(argv[2], "fois") == 0;

    if (c1)
    {
        printf("La somme de %d et %d vaut : %d \n", a, b, somme(a, b));
        return (EXIT_SUCCESS);
    }
    else if (c2)
    {
        printf("Le produit de %d par %d vaut : %d \n", a, b, produit(a, b));
        return (EXIT_SUCCESS);
    }
    else
    {
        printf("\nErreur : argument(s) invalide(s)");
        printf("\nUsage: %s int [plus|fois] int\n", argv[0]);
        return (EXIT_FAILURE);
    }
}
