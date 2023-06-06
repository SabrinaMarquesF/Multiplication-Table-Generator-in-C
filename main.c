#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, i, p;

    printf ("Deseja a tabuada para qual valor? ");
    scanf("%d%",&N);

    for (i = 1; i<=10; i++){
        p = N * i;
        printf ("%d x %d = %d\n", N, i, p);
    }

    return 0;
}
