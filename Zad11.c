#include <stdio.h>
#include <string.h>


int textOnEnd(char *string, char *tekst)
{
  int s, a=strlen(tekst), b=strlen(string)-1, dlugosc = strlen(string);

  for(s=a-1; s>=a-dlugosc; s--)
  {
        if(tekst[s] != string[b])
                return -1;

        --b;
  }

  if(tekst[a-dlugosc-1]==' ')
  return 1;
  else
  return -1;
}


int main(){
int c;
  char *tekst = "ala ma kota";
  char *string = "kota";

	c=textOnEnd(string,tekst);

	printf("%d\n",c);

	if(c>0)
 	printf("Teksty sa takie same.\n");

	else
	printf("Teksty roznia sie.\n");

return 0;
}
