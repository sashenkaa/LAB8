#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 6

void getStringR(char *table)
{
    char static_table[TAB_SIZE];

    char character_input;

    int i = 0;

    printf("Ilosc znakow do wpisania: %d\n", TAB_SIZE);

    while ( i < TAB_SIZE )
    {
        character_input = getchar();

        if( character_input != '\n' )
        {
            static_table[i] = character_input;

            table = realloc(table, sizeof(char)*(i+1));
            *(table+i) = static_table[i];
            ++i;
        }
    }

    printf("Zawartosc tabeli:\n");

    for (i=0; i<TAB_SIZE; ++i)
        printf("%c ", *(table+i));
}
int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE);
    char *tableN = NULL;
    char *tableR = NULL;

    getStringR(tableR);

	printf("\n");

    return 0;
}
