
#include <stdio.h>
#include <stdlib.h>

int main (){
	int posições[10];
	int n;

for (n=0;n<10;n++){
	printf ("Digite um valor para a posição %d:\n", n);
	scanf ("%d", &posições[n]);
}

printf ("os números dobrados são: ");
for (n=0;n<10;n++){
	posições[n]=posições[n]*2;
	printf ("%d\n", posições[n]);
}

return 0;

}
