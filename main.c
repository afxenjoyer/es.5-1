#include <stdio.h>

int main(void)
{
    char nomi[] = {'F', 'E', 'D', 'C', 'B', 'A'};
    int scelta = 0;

    while (scelta < 1 || scelta > 6)
    {
        printf("Inserisci la posizione di arrivo di un concorrente\n");
        scanf("%d", &scelta);
    }

    printf("Il concorrente è %c\n", nomi[scelta-1]);

    return 0;
}
