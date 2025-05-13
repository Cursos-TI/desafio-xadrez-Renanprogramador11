#include <stdio.h>

int main() {
   
int torre = 1 , bispo = 1 , rainha = 1 , cavalo  , movimentacao ;

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
 
printf ("------------------------ \n ") ;
printf (" Movimnetaçao da Cavalo \n ") ;
printf ("------------------------ \n ") ;



printf ("Escolha a movimentação do cavalo  \n ");
printf("1. Cima  cima  direita  \n");
printf("2. Cima  cima  esquerta  \n");
printf("3. Baixo  baixo  direita  \n");
printf("4. Baixo  baixo  esquerta  \n");
scanf("%d" , &movimentacao);




switch (movimentacao)
{
 case 1:
    while (cavalo -- )
  {

   for (int cavalo = 1  ; cavalo < 3 ; cavalo++)
    {

    printf(" Cima \n ");

   }

    printf (" Direita \n ");

}
    break;
    
case 2:
   
   while (cavalo -- )
  {

   for (int cavalo = 1  ; cavalo < 3 ; cavalo++)
    {

    printf(" Cima \n ");

   }

    printf (" Esquerda \n ");

}

break;    

case 3:
    while (cavalo --)
  {

   for (int cavalo = 1  ; cavalo < 3 ; cavalo++)
    {

    printf(" Baixo \n ");

   }

    printf (" Direita \n ");

}

break;    

case 4 :
    while (cavalo -- )
  {

   for (int cavalo = 1  ; cavalo < 3 ; cavalo++)
    {

    printf(" Baixo \n ");

   }

    printf (" Esquerda \n ");

}

break;    


default:
 printf("Opção ivalida \n ");

break;   

    return 0;
}
