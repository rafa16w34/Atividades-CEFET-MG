#include <stdio.h>
#include<stdlib.h>
#define MAX 10
int main(){
char s[MAX], ss[MAX];
printf ("Digite uma frase salvo com scanf\n");
scanf ("%c", s[MAX]);
printf ("\nDigite uma frase (salvo com fgets)");
fgets (ss,MAX,stdin);
puts (s);
printf("\n");
puts(ss);
return 0;
}
