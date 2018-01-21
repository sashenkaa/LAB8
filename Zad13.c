#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 6


void getStringN(char *table, int n)
{
    table = malloc(sizeof(char)*n);

    char character_input;

    int i = 0;

    printf("Ilosc znakow do wpisania: %d\n", n);

    while ( i < n )
    {
        character_input = getchar();

        if( character_input != '\n' )
        {
            *(table+i) = character_input;
            ++i;
        }
    }

    printf("Zawartosc tabeli:\n");

    for (i=0; i<n; ++i)
        printf("%c ", *(table+i));
}

int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE);
    char *tableN = NULL;
    char *tableR = NULL;


    getStringN(table,TAB_SIZE);

    return 0;
}
