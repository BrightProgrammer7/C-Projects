#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (argc != 3)
    {
        printf("\nErreur : nombre invalide d'arguments");
        printf("\nUsage : %s int int \n", argv[0]);
        return (EXIT_FAILURE);
    }
    else
    {
        printf("\nLa somme de %d et %d vaut : %d \n", a, b, a + b);
        return (EXIT_SUCCESS);
    }
}
