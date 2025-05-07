#include <stdio.h>

int main() {
   
int torre = 1 , bispo = 1 , rainha = 1 ;

printf ("------------------------ \n ") ;
printf("Movimentação da Torre \n ");
printf ("------------------------ \n ") ;

while (torre <= 5) {
    printf("Torre foi %d casa pra dierita \n ", torre);

    torre++;
}

printf ("------------------------ \n ") ;
printf("Movimentação do Bispo \n ") ; 
printf ("------------------------ \n ") ;

do {
 printf("Bispo foi %d casa para cima , direira \n", bispo);
    bispo ++;
} while (bispo <= 5);

  printf ("------------------------ \n ") ;
  printf (" Movimnetaçao da Rainha \n ") ;
  printf ("------------------------ \n ") ;


for (int rainha = 1; rainha <= 8; rainha ++) {
    printf("Rainha foi %d casas para a esquerda \n", rainha) ;
}





    return 0;
}
